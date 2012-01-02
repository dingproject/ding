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
function ding_panels_library_portal_ctools_content_types() {
  return array(
    'title' => t('Library portal navigation'),
    'description' => t('Shows the CMS menu - if available, it will show the portal library specific menu.'),
    'category' => t('Library page'),
    'single' => TRUE,
    'required context' => new ctools_context_optional(t('Node'), 'node'),
  );
}

/**
 * Return the pane contents.
 */
function ding_panels_library_portal_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $library = isset($context->data) ? drupal_clone($context->data) : NULL;

  $block->content = _ding_panels_library_portal_navigation_render($library, $conf['default_menu']);

  return $block;
}

/**
 * Return the pane titles.
 */
function ding_panels_library_portal_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s":  Library portal navigation', array('@s' => $context->identifier));
}

/**
 * Returns an edit form for the content type.
 */
function ding_panels_library_portal_content_type_edit_form(&$form, &$form_state) {
  $form['default_menu'] = array(
    '#type' => 'select',
    '#title' => t('Default menu'),
    '#description' => t('If a menu related to the library node can not be found, show this menu instead.'),
    '#options' => array_merge(array(t('- None -')), menu_get_menus()),
    '#default_value' => $form_state['conf']['default_menu'],
  );

  // Add a 'none' option to the menu options.
  array_unshift($form['default_menu']['#default_value'], t('- None -'));

  return $form;
}

/**
 * Submit handler for the content type editing form.
 */
function ding_panels_library_portal_content_type_edit_form_submit(&$form, &$form_state) {
  $form_state['conf']['default_menu'] = $form_state['values']['default_menu'];
}

/**
 * Render the menu for a portal page.
 *
 * @param object $node
 *    The library node.
 * @param string $default_menu
 *    Menu ID of the menu to use if a suitable library menu was not found.
 * @return string
 *    Rendered menu.
 */
function _ding_panels_library_portal_navigation_render($library = NULL, $default_menu = NULL) {
  // If a library node is specified, try to load its menu tree.
  if ($library instanceof stdClass) {
    $tree = menu_tree('ding_library_' . $library->nid);
  }

  if (empty($tree) && !empty($default_menu)) {
    if(variable_get('ding_page_skip_first_menu_level', FALSE)){
      // a tweaked implementation of func menu_tree, which skips the first level in menu.
      $items = array();
      $items = menu_tree_page_data($default_menu);
      foreach($items as $item){
        if($item['link']['in_active_trail']){
          $tree = menu_tree_output($item['below']); 
        }
      }
    }
    else{
      // Load the default menu. (default behaviour)
      $tree = menu_tree($default_menu);
    }
  }

  if (!empty($tree)) {
    return $tree;
  }
}


