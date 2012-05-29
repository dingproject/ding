<?php

/**
 * @file
 * Admin pages for event module.
 */

/**
 * Page callback; settings page.
 */
/**
 *
 */
function ding_event_settings_form(&$form_state) {
  $form['ding_event_kultunaut_limit'] = array(
    '#type' => 'textfield',
    '#title' => t('KultuNaut feed limit'),
    '#description' => t('Maximum number of events to list in the feed for KultuNaut. Warning, large numbers might affect performance.'),
    '#default_value' => variable_get('ding_event_kultunaut_limit', 50),
  );

  return system_settings_form($form);
}
