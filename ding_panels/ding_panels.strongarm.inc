<?php

/**
 * Implementation of hook_strongarm().
 */
function ding_panels_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = 'error/403';
  $export['site_403'] = $strongarm;

  return $export;
}
