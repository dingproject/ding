<?php

/**
 * Theming of a records list.
 *
 * Usually a list of reservations, books, etc, coming from Alma.
 */
function theme_ding_library_user_record_list($type, $records) {
  module_load_include('client.inc', 'ting');
  $items = array();
  foreach ($records as $rec) {
    $items[] = theme('ding_library_user_list_item', $type, $rec);
  }

  return theme('item_list', $items, NULL, 'ul', array('class' => 'record-list'));
}

/**
 * Theming of loan details form.
 */
function theme_ding_library_user_loan_list_form($form) {
  $date_format = variable_get('date_format_date_short', 'Y-m-d');
  module_load_include('client.inc', 'ting');
  $groups = array();
  $output = '';

  if ($form['buttons']) {
    $form['top_buttons'] = $form['buttons'];
    // Add suffix to duplicated form button ids to ensure uniqueness
    foreach (element_children($form['top_buttons']) as $key) {
      if (isset($form['top_buttons'][$key]['#id'])) {
        $form['top_buttons'][$key]['#id'] .= '-top';
      }
    }
    $output .= drupal_render($form['top_buttons']);
  }

  $header = array(t('Select'), '', t('Title'), t('Loan date'), t('Due date'));

  $colgroups = array(
    array(
      array(
        'class' => 'col-selection',
      ),
    ),
    array(
      array(
        'class' => 'col-image',
      ),
    ),
    array(
      array(
        'class' => 'col-title',
      ),
    ),
    array(
      array(
        'class' => 'col-loan-date',
      ),
    ),
    array(
      array(
        'class' => 'col-due-date',
      ),
    ),
  );

  foreach ($form['loan_data']['#grouped'] as $date => $group) {
    // Overdue loans get preferential treatment. No checkboxes here.
    if ($date == 'overdue') {
      $table_title = t('Overdue loans');
    }
    // The normal loans get grouped by due date.
    else {
      if ($date == 'due') {
        $table_title = t('Due today');
      }
      else {
        $table_title = t('Due in @count days, @date', array('@date' => date('d/m/y', strtotime($date)), '@count' => ceil((strtotime($date) - $_SERVER['REQUEST_TIME']) / 86400)));
      }
    }

    $rows = array();
    foreach ($group as $loan_id) {
      $loan = $form['loan_data']['#value'][$loan_id];
      $cells = array();

      $cells['checkbox'] = array(
        'class' => 'checkbox',
        'data' => drupal_render($form['loans'][$loan_id]),
      );

      $cells['image'] = array(
        'class' => 'image',
        'data' => theme('ding_library_user_list_item_image', 'loan', $loan, '80_x'),
      );

      $cells['title'] = array(
        'class' => 'title',
        'data' => theme('ding_library_user_list_item', 'loan', $loan),
      );

      if (isset($form['loans'][$loan_id]['#renewed'])) {
        $cells['title']['data'] .= '<span class="renewal-status ' . $form['loans'][$loan_id]['#renewed'] . '">' . $form['loans'][$loan_id]['#renewed_text'] . '</span>';
      }

      $cells['loan_date'] = array(
        'class' => 'loan_date',
        'data' => ding_library_user_format_date($loan['loan_date'], $date_format),
      );

      $cells['due_date'] = array(
        'class' => 'due_date',
        'data' => ding_library_user_format_date($loan['due_date'], $date_format),
      );

      $rows[] = array(
        'data' => $cells,
        'class' => (($form['loans'][$loan_id]['#disabled']) ? 'immutable' : 'selectable'),
      );
    }

    if (!empty($rows)) {
      $output .= theme('table', $header, $rows, array('colgroups' => $colgroups), $table_title);
    }
  }

  if (empty($output)) {
    return t('No loans found.');
  }

  $output .= drupal_render($form);
  return $output;
}


/**
 * Preprocess function for ding_library_user_list_item.
 */
function template_preprocess_ding_library_user_list_item(&$vars) {
  // TODO: Kill off ting_object_title theme
  /*
   * - $materials_number: Materials number (optional).
   * - $title: Item title, possibly a link.
   * - $title_plain: Title without a link.
   * - $image: Image (optional).
   * - $authors: Authors (optional).
   * - $type: Item type (optional).
   * - $url: Url of item.
   * - $remote_loan: Boolean.
   */
  if (ding_provider_supports($vars['provider_type'], 'details')) {
    $item = ding_provider_invoke($vars['provider_type'], 'details', $vars['item']);
    $vars['item'] = $item;
  }
  else {
    $item = $vars['item'];
  }

  if ($item['ting_object']) {
    $object = $item['ting_object'];
    //Fall back to object title if no title is specified
    $vars['title'] = $vars['title_plain'] = ($item['title']) ? check_plain($item['title']) : check_plain($object->title);

    if ($object->url) {
      $vars['url'] = $object->url;
      // Pass HTML as the title has already been passed through check_plain() above.
      $vars['title'] = l($vars['title'], $object->url, array('html' => TRUE));
    }
    
    //Fall back to object authors if no authors are specified
    $vars['authors'] = ($item['authors']) ? check_plain($item['authors']) : (($object->creators_string) ? check_plain($object->creators_string) : '');
    $image_url = ting_covers_object_url($object, '80_x');
    $vars['image'] = $image_url ? theme('image', $image_url, '', '', NULL, FALSE) : '';
    $vars['type'] = $object->type ? check_plain($object->type) : '';
  }
  else {
    if (empty($item['title'])) {
      $vars['title_plain'] = empty($item['display_title']) ? t('Title not available.') : check_plain($item['display_title']);
    }
    else {
      $vars['title_plain'] = check_plain($item['title']);
    }
    $vars['title'] = $vars['title_plain'];
    // Don't populate authors if we're using display_title. It
    // probably contains authors in some way.
    $vars['authors'] = '';
    if ($item['authors'] && (!empty($item['title']) || empty($item['display_title']))) {
      $vars['authors'] = $item['authors'];
    }
  }
  if ($vars['provider_type'] == 'loan') {
    $vars['remote'] = isset($item['remote_loan']) && $item['remote_loan'] ? t('remote loan') : FALSE;
  }
  elseif ($vars['provider_type'] == 'reservation') {
    $vars['remote'] = isset($item['remote_reservation']) && $item['remote_reservation'] ? t('remote reservation') : FALSE;
  }
  $vars['materials_number'] = isset($item['materials_number']) ? $item['materials_number'] : '';
}

/**
 * Theme an image for a list item.
 */
function theme_ding_library_user_list_item_image($type, $item, $preset) {
  if (ding_provider_supports($type, 'details')) {
    $item = ding_provider_invoke($type, 'details', $item);
  }

  if ($item['ting_object']) {
    $image_url = ting_covers_faust_url($item['ting_object']->localId, $preset);
    return ($image_url) ? theme('image', $image_url, '', '', NULL, FALSE) : '';
  }
  return '';
}

/**
 * Preprocessor for the ding_library_user_personal_info template.
 */
function template_preprocess_ding_library_user_personal_info(&$variables) {
  $links = array(
    l(t('Edit contact information'), 'user/' . $variables['account']->uid . '/edit'),
  );
  if (ding_provider_supports('user', 'password change')) {
    $links[] = l(t('Change PIN code'), 'user/' . $variables['account']->uid . '/change_pin');
  }
  $variables['links'] = theme('item_list', $links);
}

/**
 * Preprocessor for the user status template.
 */
function template_preprocess_ding_library_user_status_block(&$variables) {
  $account = $variables['user'];

  // If has secure role is not set, ding_user's user_load has not been
  // called for this user object. Let's do it manually.
  if (!isset($account->has_secure_role)) {
    $edit = array();
    ding_user_user('load', $edit, $account);
  }

  $variables['wrapper_classes'] = '';
  // Use alma_name if available.
  if (!empty($account->display_name)) {
    $variables['display_name'] = $account->display_name;
  }
  else {
    $variables['display_name'] = $account->name;
  }

  if ($account->library_user_id && !$account->has_secure_role) {
    $variables['profile_link'] = 'user/' . $account->uid . '/profile';
  }
  else {
    $variables['profile_link'] = 'user/' . $account->uid;
  }

  $variables['status_available'] = $variables['user_status']['status_available'];
  if (!$variables['status_available']) {
    if (!empty($account->library_user_id)) {
      $variables['status_unavailable_message'] = t('Please !log_in to view your loaner status', array('!log_in' => l(t('log in'), 'user/' . $account->uid . '/authenticate')));
    }
    else {
      // If user doesn't have an library system ID, don't show a message, since we
      // can't just log him in to get the status. This should usually
      // only be the case for admin users.
      $variables['status_unavailable_message'] = '';
    }
  }
  else {
    if ($variables['user_status']['loan_overdue_count'] > 0) {
      $variables['wrapper_classes'] .= 'loans-overdue';
    }

    // Get the item count from ding_cart, if the module is available.
    if (function_exists('ding_cart_user_count')) {
      $variables['has_cart'] = TRUE;
      $variables['cart_count'] = ding_cart_user_count($account);
    }
    else {
      $variables['has_cart'] = FALSE;
    }
  }
}
