<?php

/**
 * Theming of reservation detailed list form.
 */
function theme_ding_reservation_list_form($form) {
  $date_format = variable_get('date_format_date_short', 'Y-m-d');
  $output = '';
  module_load_include('client.inc', 'ting');

  if (!empty($form['reservations']['#grouped']['fetchable'])) {
    $header = array(
      t('Select'),
      '',
      t('Title'),
      t('Pickup number'),
      t('Pickup by'),
      t('Pickup branch'),
    );

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
          'class' => 'col-pickup-number',
        ),
      ),
      array(
        array(
          'class' => 'col-pickup-by',
        ),
      ),
      array(
        array(
          'class' => 'col-pickup-branch',
        ),
      ),
    );

    $rows = array();

    foreach ($form['reservations']['#grouped']['fetchable'] as $item) {
      $cells = array();
      if (isset($form['selected'][$item['id']])) {
        $cells['checkbox'] = array(
          'class' => 'checkbox',
          'data' => drupal_render($form['selected'][$item['id']]),
        );
      }
      else {
        $cells['checkbox'] = array(
          'class' => 'checkbox empty',
          'data' => '<label for="edit-selected-'.$item['id'].'">'.'–'.'</label>',
        );
      }

      $cells['image'] = array(
        'class' => 'image',
        'data' => '<label for="edit-selected-'.$item['id'].'">'.theme('ding_library_user_list_item_image', 'reservation', $item, '80_x').'</label>',
      );

      $cells['title'] = array(
        'class' => 'title',
        'data' => '<label for="edit-selected-'.$item['id'].'">'.theme('ding_library_user_list_item', 'reservation', $item) . ' (<span class="reservation-number">' . t('Res. no @num', array('@num' => $item['id'])) . '</span>)'.'</label>',
      );

      $cells['pickup_number'] = array(
        'class' => 'pickup_number',
        'data' => '<label for="edit-selected-'.$item['id'].'">'.$item['pickup_number'].'</label>',
      );

      $cells['pickup_expire_date'] = array(
        'class' => 'pickup_expire_date',
        'data' => '<label for="edit-selected-'.$item['id'].'">'.ding_library_user_format_date($item['pickup_expire_date'], $date_format).'</label>',
      );

      $cells['pickup_branch'] = array(
        'class' => 'pickup_branch',
        'data' => '<label for="edit-selected-'.$item['id'].'">'.$item['pickup_branch'] ? $item['pickup_branch'] : t('Unknown').'</label>',
      );

      $rows[] = $cells;
    }

    $output .= theme('table', $header, $rows, array('id' => 'reservations-fetchable', 'colgroups' => $colgroups), t('Reservations ready for pickup'));
  }

  if (!empty($form['reservations']['#grouped']['active'])) {
    $header = array(
      t('Select'),
      '',
      t('Title'),
      t('Reserved'),
      t('Valid to'),
      t('Pickup branch'),
      t('Queue number'),
    );

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
          'class' => 'col-title-res',
        ),
      ),
      array(
        array(
          'class' => 'col-reservation',
        ),
      ),
      array(
        array(
          'class' => 'col-valied-to',
        ),
      ),
      array(
        array(
          'class' => 'col-pickup-branch',
        ),
      ),
      array(
        array(
          'class' => 'col-queue-number',
        ),
      ),
    );

    $rows = array();
    foreach ($form['reservations']['#grouped']['active'] as $item) {
      $cells = array();
      if (isset($form['selected'][$item['id']])) {
        $cells['checkbox'] = array(
          'class' => 'checkbox',
          'data' => drupal_render($form['selected'][$item['id']]),
        );
      }
      else {
        $cells['checkbox'] = array(
          'class' => 'checkbox empty',
          'data' => '–',
        );
      }

      $cells['image'] = array(
        'class' => 'image',
        'data' => '<label for="edit-selected-'.$item['id'].'">'.theme('ding_library_user_list_item_image', 'loan', $item, '80_x').'</label>',
      );

      $cells['title'] = array(
        'class' => 'title',
        'data' => '<label for="edit-selected-'.$item['id'].'">'.theme('ding_library_user_list_item', 'reservation', $item) . ' (<span class="reservation-number">' . t('Res. no @num', array('@num' => $item['id'])) . '</span>)'.'</label>',
      );

      $cells['create_date'] = array(
        'class' => 'create_date',
        'data' => '<label for="edit-selected-'.$item['id'].'">'.ding_library_user_format_date($item['create_date'], $date_format).'</label>',
      );

      $cells['valid_to'] = array(
        'class' => 'valid_to',
        'data' => '<label for="edit-selected-'.$item['id'].'">'.ding_library_user_format_date($item['valid_to'], $date_format).'</label>',
      );

      $cells['pickup_branch'] = array(
        'class' => 'pickup_branch',
        'data' => '<label for="edit-selected-'.$item['id'].'">'.($item['pickup_branch'] ? $item['pickup_branch'] : t('Unknown')).'</label>',
      );

      $cells['queue_number'] = array(
        'class' => 'queue_no',
        'data' => (!isset($item['remote_reservation']) || !$item['remote_reservation']) ? '<label for="edit-selected-'.$item['id'].'">'.$item['queue_number'].'</label>' : '<abbr title="'.t('Queue number is not supported for remote reservations').'">-</abbr>',
      );

      $classes = 'active-reservations';
      if (isset($item['remote_reservation']) && $item['remote_reservation']) {
        $classes .= ' remote-reservations';
      }

      $rows[] = array(
        'data' => $cells,
        'class' => $classes,
      );
    }

    $output .= theme('table', $header, $rows, array('id' => 'reservations-active', 'colgroups' => $colgroups), t('Active reservations'));
  }

  if (empty($output)) {
    return t('No reservations found.');
  }

  $output .= '<div class="update-controls clear-block">';
  $output .= drupal_render($form['options']);
  $output .= '</div>';

  // fisk
  $output .= '<div class="update-controls-button clear-block">';
  $output .= drupal_render($form['buttons']);
  $output .= '</div>';

  $output .= drupal_render($form);

  return $output;
}
