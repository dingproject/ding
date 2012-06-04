<?php
/**
 * @file
 * Provides several library portal page related panels content types.
 */

/**
 * Callback function to supply a list of content types.
 *
 * This is only required to make CTools know that we're providing 
 * multiple types here (since we have no single => TRUE in the array).
 */
function ding_panels_library_title_ctools_content_types() {
  return array(
    'title' => t('Library title and navigation'),
    'description' => t('The title and navigation for a library page.'),
    'category' => t('Library page'),
    'single' => TRUE,
    'defaults' => array(
      'display_header_image' => FALSE,
    ),
    'required context' => new ctools_context_required(t('Node'), 'node'),
  );
}

/**
 * Return the pane contents.
 */
function ding_panels_library_title_content_type_render($subtype, $conf, $panel_args, $context) {
  $node = isset($context->data) ? drupal_clone($context->data) : NULL;

  $block = new stdClass();
  // @todo: move this into a visibility rule for the pane. At current the rules are not 
  //        saved when during this in the UI.
  if ($node->type != 'tema_site') {
    $block->content = theme('ding_panels_content_library_title', $node, $conf);
  }

  return $block;
}

/**
 * Return the pane titles.
 */
function ding_panels_library_title_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s":  Library title and navigation', array('@s' => $context->identifier));
}

/**
 * Returns an edit form for the content type.
 */
function ding_panels_library_title_content_type_edit_form(&$form, &$form_state) {
  $form['display_header_image'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display header image'),
    '#description' => t('Whether a the library title should show the (quite large) picture of the library.'),
    '#default_value' => $form_state['conf']['display_header_image'],
  );

  // Generate options array for select form element.
  $preset_options = array();
  foreach (imagecache_presets() as $preset_id => $preset) {
    $preset_options[$preset['presetname']] = $preset['presetname'];
  }

  $form['header_image_imagecache_preset'] = array(
    '#type' => 'select',
    '#title' => t('ImageCache preset'),
    '#description' => t('Chose the ImageCache preset used to render the header image.'),
    '#options' => $preset_options,
    '#default_value' => $form_state['conf']['header_image_imagecache_preset'],
  );

  $form['display_navigation_links'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display navigation links'),
    '#description' => t('Whether a the library title should show the navigation links.'),
    '#default_value' => $form_state['conf']['display_header_image'],
  );

  return $form;
}

/**
 * Submit handler for the content type editing form.
 */
function ding_panels_library_title_content_type_edit_form_submit(&$form, &$form_state) {
  $form_state['conf']['display_header_image'] = (bool) $form_state['values']['display_header_image'];
  $form_state['conf']['header_image_imagecache_preset'] = $form_state['values']['header_image_imagecache_preset'];
  $form_state['conf']['display_navigation_links'] = (bool) $form_state['values']['display_navigation_links'];
}

