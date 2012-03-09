<?php

/**
 * Implementation of hook_strongarm().
 */
function ding_library_map_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_layers_google_language';
  $strongarm->value = '';
  $export['openlayers_layers_google_language'] = $strongarm;

  return $export;
}
