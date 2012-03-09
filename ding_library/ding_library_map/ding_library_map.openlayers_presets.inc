<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function ding_library_map_openlayers_presets() {
  $export = array();

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'ding_library_map';
  $openlayers_presets->title = 'Ding! library map';
  $openlayers_presets->description = 'Standard map preset for the Ding! library map.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '200px',
    'image_path' => 'http://js.mapbox.com/theme/dark/',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.557373046875, 55.68223010941079',
        'zoom' => '12',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '881777.558196,7267938.396466,1698736.516361,7938138.26035',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_panzoom' => array(),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'invisible',
      'select' => 'invisible',
      'temporary' => 'invisible',
    ),
  );
  $export['ding_library_map'] = $openlayers_presets;

  return $export;
}
