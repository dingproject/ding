<?php
/**
 * @file
 * Page callbacks for the Ding library module
 */
function ding_library_legacy_redirect_page($nid) {
  if (is_numeric($nid)) {
    // Get all args besides the first one.
    $args = array_slice(arg(), 1);

    return drupal_goto('node/' . implode('/', $args), NULL, NULL, 301);
  }

  return drupal_not_found();
}

