<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ding_staff_profile_content_default_fields() {
  $fields = array();

  // Exported field: field_image
  $fields['profile-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      '2' => array(
        'format' => '120_120_default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => '120_120_default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => '120_120_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => '120_120_default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => '120_120_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => '120_120_default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'profile_image/[uid]',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => 0,
      'min_resolution' => '120x120',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'default_image' => NULL,
      'use_default_image' => 0,
      'progress_indicator' => 'bar',
      'title_type' => 'textfield',
      'insert' => NULL,
      'insert_styles' => NULL,
      'insert_default' => NULL,
      'insert_class' => NULL,
      'insert_width' => NULL,
      'label' => 'Profilbillede',
      'weight' => '-2',
      'description' => 'Vælg et portrætbillede. Det beskæres til at være kvadratisk.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_multi_library_ref
  $fields['profile-field_multi_library_ref'] = array(
    'field_name' => 'field_multi_library_ref',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'library' => 'library',
      'event' => 0,
      'topic' => 0,
      'article' => 0,
      'campaign' => 0,
      'profile' => 0,
      'feature' => 0,
      'page' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_multi_library_ref][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Biblioteker',
      'weight' => 0,
      'description' => 'Vælg de biblioteker som medarbejderen er tilknyttet.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_staff_title
  $fields['profile-field_staff_title'] = array(
    'field_name' => 'field_staff_title',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '40',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_staff_title][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Stilling',
      'weight' => '1',
      'description' => 'Medarbejderens titel',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_work_area
  $fields['profile-field_work_area'] = array(
    'field_name' => 'field_work_area',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '250',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_work_area][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Arbejder med',
      'weight' => '2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Arbejder med');
  t('Biblioteker');
  t('Profilbillede');
  t('Stilling');

  return $fields;
}
