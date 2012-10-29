<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function ding_panels_default_page_manager_handlers() {
  $export = array();

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ding_403_access_denied';
  $page->task = 'page';
  $page->admin_title = 'Access denied page';
  $page->admin_description = 'Generic access denied page.';
  $page->path = 'error/403';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_403_access_denied_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ding_403_access_denied';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'ding-403-access-denied',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = 'Adgang nægtet';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'access-denied-text';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Basic access denied message',
      'title' => '',
      'body' => 'Du har ikke adgang til at se denne side.',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['access-denied-text'] = $pane;
    $display->panels['middle'][0] = 'access-denied-text';
    $pane = new stdClass;
    $pane->pid = 'login-in-text';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = FALSE;
    $pane->configuration = array(
      'admin_title' => 'Please log in-text',
      'title' => '',
      'body' => 'Du er ikke logget ind. Brug login-formularen øverst på siden for at logge ind.',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['login-in-text'] = $pane;
    $display->panels['middle'][1] = 'login-in-text';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'access-denied-text';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;

  $export['ding_403_access_denied'] = $handler;

  return $export;
}
