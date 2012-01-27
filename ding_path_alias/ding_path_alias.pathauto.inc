<?php

function ding_path_alias_library_bookpc_page_pathauto_bulk_update_batch_process(&$context) {
  _ding_path_alias_bulk_update_batch_process($context, 'bookpc', 'bookpc');
}

function ding_path_alias_library_facilities_page_pathauto_bulk_update_batch_process(&$context) {
  _ding_path_alias_bulk_update_batch_process($context, 'facilities', 'faciliteter');
}

function ding_path_alias_library_local_page_pathauto_bulk_update_batch_process(&$context) {
  _ding_path_alias_bulk_update_batch_process($context, 'local', 'lokalt');
}

function ding_path_alias_library_about_page_pathauto_bulk_update_batch_process(&$context) {
  _ding_path_alias_bulk_update_batch_process($context, 'about', 'om');
}

function ding_path_alias_library_blog_page_pathauto_bulk_update_batch_process(&$context) {
  _ding_path_alias_bulk_update_batch_process($context, 'blog', 'blog');
}

function ding_path_alias_library_event_page_pathauto_bulk_update_batch_process(&$context) {
  _ding_path_alias_bulk_update_batch_process($context, 'event', 'arrangementer');
}

function _ding_path_alias_bulk_update_batch_process(&$context, $name, $url_suffix) {
  if (!isset($context['sandbox']['current'])) {
    $context['sandbox']['count'] = 0;
    $context['sandbox']['current'] = 0;
  }

  $concat = _pathauto_sql_concat("'node/'", 'n.nid', "'/$url_suffix'");

  $sql = "
    SELECT n.nid FROM {node} AS n 
    LEFT JOIN {url_alias} AS ua ON $concat = ua.src
    WHERE ua.src IS NULL AND n.type = 'library' AND n.nid > %d 
    ORDER BY n.nid
  ";

  $args = array($context['sandbox']['current']);

  // Get the total amount of items to process.
  if (!isset($context['sandbox']['total'])) {
    $context['sandbox']['total'] = db_result(db_query(_pathauto_sql_count($sql), $args));

    // If there are no nodes to update, the stop immediately.
    if (empty($context['sandbox']['total'])) {
      $context['finished'] = 1;
      return;
    }
  }

  $query = db_query_range($sql, $args, 0, 25);
  $nids = array();
  while ($nid = db_result($query)) {
    $nids[] = $nid;
  }

  // Update the alias for each selected node.
  ding_path_alias_update_alias_multiple($nids, 'bulkupdate', array(
    'name' => $name,
    'url_suffix' => $url_suffix,
  ));

  $context['sandbox']['count'] += count($nids);
  $context['sandbox']['current'] = max($nids);
  $context['message'] = t('Updated @type alias for library @nid.', array('@type' => $url_suffix, '@nid' => end($nids)));

  if ($context['sandbox']['count'] != $context['sandbox']['total']) {
    $context['finished'] = $context['sandbox']['count'] / $context['sandbox']['total'];
  }
}

/**
 * Update the URL aliases for an individual node.
 *
 * @param $node
 *   A node object.
 * @param $op
 *   Operation being performed on the node ('insert', 'update' or 'bulkupdate').
 * @param $options
 *   An optional array of additional options.
 */
function ding_path_alias_update_alias($node, $op, $options = array()) {
  // Skip processing if the user has disabled pathauto for the node.
  if (isset($node->pathauto_perform_alias) && empty($node->pathauto_perform_alias)) {
    return;
  }

  $options += array(
    'language' => isset($node->language) ? $node->language : '',
  );

  // Skip processing if the node has no pattern.
  if (!pathauto_pattern_load_by_entity('library_' . $options['name'] . '_page', '', $options['language'])) {
    return;
  }

  module_load_include('inc', 'pathauto');
  if ($alias = pathauto_create_alias('library_' .  $options['name'] . '_page', $op, 'node/' . $node->nid . '/' . $options['url_suffix'], array('node' => $node), $node->nid, $node->type, $options['language'])) {
    $node->path = $alias;
  }
}

/**
 * Update the URL aliases for multiple nodes.
 *
 * @param $nids
 *   An array of node IDs.
 * @param $op
 *   Operation being performed on the nodes ('insert', 'update' or
 *   'bulkupdate').
 * @param $options
 *   An optional array of additional options.
 */
function ding_path_alias_update_alias_multiple($nids, $op, $options = array()) {
  $options += array('message' => FALSE);

  foreach ($nids as $nid) {
    if ($node = node_load($nid, NULL, TRUE)) {
      ding_path_alias_update_alias($node, $op, $options);
    }
  }

  if (!empty($options['message'])) {
    drupal_set_message(format_plural(count($nids), 'Updated URL alias for 1 node.', 'Updated URL aliases for @count nodes.'));
  }
}

