<?php
/**
 * @file
 * Admin forms for the Ding Library Map module.
 */

/**
 * Main admin settings form.
 */
function ding_library_map_admin_settings_form(&$form_state) {
  $lon_lat = variable_get('ding_library_map_center', array('lat' => '', 'lon' => ''));
  $form = array();

  $form['ding_library_map_center'] = array(
    '#type' => 'fieldset',
    '#title' => t('Map center'),
    '#description' => t('The default center coordinates of the map, expressed as a decimal latitude and longitude.'),
    '#tree' => TRUE,
  );

  $form['ding_library_map_center']['lat'] = array(
    '#type' => 'textfield',
    '#title' => t('Latitude'),
    '#default_value' => $lon_lat['lat'],
  );

  $form['ding_library_map_center']['lon'] = array(
    '#type' => 'textfield',
    '#title' => t('Longitude'),
    '#default_value' => $lon_lat['lon'],
  );

  $form['ding_library_map_zoom'] = array(
    '#type' => 'textfield',
    '#title' => t('Zoom'),
    '#default_value' => variable_get('ding_library_map_zoom', 11),
  );

  return system_settings_form($form);
}

