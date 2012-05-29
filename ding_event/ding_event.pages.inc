<?php

/**
 * Generate custom XML feed for exporting events to KultuNaut.
 */
function ding_event_pages_kultunaut_feed() {
  // String containing the rendered nodes.
  $activities = '';

  // Array for holding library names and locations, so we don't have to
  // load them for each event.
  $library_data = array();

  // Vocabulary IDs for target and category.
  $category_vid = variable_get('ding_event_category_vocabulary_id', 4);
  $target_vid = variable_get('ding_event_target_vocabulary_id', 5);

  // Query to find events that are not over yet, capped at max 50.
  $query = db_query("
    SELECT nid FROM {content_type_event} AS cte
    LEFT JOIN {node} AS n USING (nid)
    WHERE n.status > 0 AND
    (cte.field_datetime_value > NOW() OR field_datetime_value2 > NOW())
    ORDER BY cte.field_datetime_value ASC
    LIMIT 0, %d;
  ", variable_get('ding_event_kultunaut_limit', 50));

  // Load each node found (remember that in Drupal 7, we can use
  // node_load_multiple() instead.
  while ($nid = db_result($query)) {
    $node = node_load($nid, NULL, TRUE);

    $start = date_make_date($node->field_datetime[0]['value']);
    $end = date_make_date($node->field_datetime[0]['value2']);

    $node->activity_type = (date_format_date($start, 'custom', DATE_FORMAT_DATE) != date_format_date($end, 'custom', DATE_FORMAT_DATE)) ? 'flerdages' : '1-dags';
    $node->activity_start = date_format_date($start, 'custom', 'Y/m/d H:i:s T');
    $node->activity_end = date_format_date($end, 'custom', 'Y/m/d H:i:s T');
    $node->activity_price = floatval($node->field_entry_price[0]['value']);

    // Related library data.
    if ($node->field_library_ref[0]['nid'] > 0) {
      $library_id = $node->field_library_ref[0]['nid'];

      // If we don't have library data loaded already, get it.
      if (!isset($library_data[$library_id])) {
        $node->activity_library = array();
        $node->activity_library['name'] = db_result(db_query("SELECT title FROM {node} WHERE nid = %d", $library_id));
        $locations = location_load_locations($library_id);

        // If a location was set for the library, add its data to the
        // library data.
        if (!empty($locations)) {
          $node->activity_library += $locations[0];
        }

        // Save the loaded data for later use.
        $library_data[$library_id] = $node->activity_library;
      }
      else {
        // Use the preloaded data if available.
        $node->activity_library = $library_data[$library_id];
      }

    }

    // Filter taxonomy terms into targets and categories.
    $node->activity_categories = array();
    $node->activity_targets = array();

    foreach ($node->taxonomy as $term) {
      if ($term->vid == $category_vid) {
        $node->activity_categories[] = $term->name;
      }
      elseif ($term->vid == $target_vid) {
        $node->activity_targets[] = $term->name;
      }
    }

    $activities .= theme('ding_event_kultunaut_activity', $node);
  }

  drupal_set_header('Content-Type: text/xml; charset=utf-8');
  echo theme('ding_event_kultunaut_feed', array(
    'encoding' => 'utf-8',
    'activities' => $activities,
  ));
  return;
}

