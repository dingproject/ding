<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ding_staff_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ding_staff_profile_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Staff profile'),
      'module' => 'features',
      'description' => t('A staff profile with description, profile picture, and tags.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ding_staff_profile_views_api() {
  return array(
    'api' => '2',
  );
}
