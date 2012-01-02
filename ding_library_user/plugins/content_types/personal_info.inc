<?php
/**
 * @file
 * Provides a Panels content type with a map of libraries.
 */

/**
 * Callback function to supply a list of content types.
 */
function ding_library_user_personal_info_ctools_content_types() {
  return array(
    'title' => t('Personal information'),
    'single' => TRUE,
    'description' => t('Displays the user’s personal info from the library database.'),
    'category' => t('Library patron profile'),
    'required context' => new ctools_context_required(t('user'), 'user'),
  );
}

/**
 * Return the pane contents.
 */
function ding_library_user_personal_info_content_type_render($subtype, $conf, $panel_args, $context) {
  $account = isset($context->data) ? drupal_clone($context->data) : NULL;
  $block = new stdClass();

  $creds = ding_library_user_get_credentials($account);

  if ($creds != DING_PROVIDER_AUTH_REQUIRED) {
    $block->title = t('Personal information');
    $library_user_data = array();
    if (ding_provider_supports('user', 'personal_info')) {
      $library_user_data = ding_provider_invoke('user', 'personal_info', $account);
    }

    if (!isset($library_user_data['blocks']) || empty($library_user_data['blocks'])) {
      $block->content = theme('ding_library_user_personal_info', $account, $library_user_data);
    }
    else {
      $block->content = t('Your account is blocked, information not available.');
    }
  }

  return $block;
}

/**
 * Return the pane titles.
 */
function ding_library_user_personal_info_content_type_admin_title($subtype, $conf, $context) {
  return t('“@s”: library personal information', array('@s' => $context->identifier));
}

/**
 * Returns an edit form for the content type.
 *
 * We're not actually doing anything here, but we need to have this hook
 * for this content type to work.
 */
function ding_library_user_personal_info_content_type_edit_form(&$form, &$form_state) {
  return $form;
}


