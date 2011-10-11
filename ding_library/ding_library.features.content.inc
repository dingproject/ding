<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ding_library_content_default_fields() {
  $fields = array();

  // Exported field: field_content_images
  $fields['library-field_content_images'] = array(
    'field_name' => 'field_content_images',
    'type_name' => 'library',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'content_images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 1,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_180_x' => 0,
        'imagecache_ting_search_carousel' => 0,
        'imagecache_680_200_crop' => 0,
        'imagecache_120_120' => 0,
        'imagecache_80_x' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Indholdsbilleder',
      'weight' => '-3',
      'description' => 'Upload af billeder til indsættelse i brødteksten.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_email
  $fields['library-field_email'] = array(
    'field_name' => 'field_email',
    'type_name' => 'library',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'spamspan',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'spamspan',
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
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '1',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'E-mail',
      'weight' => '2',
      'description' => 'Skriv bibliotekets e-mail-adresse',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_feature_ref
  $fields['library-field_feature_ref'] = array(
    'field_name' => 'field_feature_ref',
    'type_name' => 'library',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
      'event' => 0,
      'library' => 0,
      'page' => 0,
      'article' => 0,
      'feature' => 'feature',
      'topic' => FALSE,
      'campaign' => FALSE,
      'profile' => FALSE,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Faciliteter',
      'weight' => '1',
      'description' => '',
      'type' => 'ding_feature_ref_feature',
      'module' => 'ding_feature_ref',
    ),
  );

  // Exported field: field_image
  $fields['library-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'library',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => '120_120_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => '680_200_crop_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
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
      'file_path' => '',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
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
      'label' => 'Hovedbillede',
      'weight' => '-2',
      'description' => 'Hovedbilledet bruges på bibliotekets side i størrelsen 680x200',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_links
  $fields['library-field_links'] = array(
    'field_name' => 'field_links',
    'type_name' => 'library',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'title_plain',
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
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'required',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Links',
      'weight' => 0,
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_list_image
  $fields['library-field_list_image'] = array(
    'field_name' => 'field_list_image',
    'type_name' => 'library',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => '120_120_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
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
      'file_path' => 'list_images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_80_x' => 0,
        'imagecache_120_120' => 0,
        'imagecache_180_x' => 0,
        'imagecache_680_200_crop' => 0,
        'imagecache_ting_search_carousel' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Listevisningsbillede',
      'weight' => '-1',
      'description' => 'Billede til brug i indholdslister. Dette billede beskæres automatisk til at være kvadratisk, 120x120 pixels.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_opening_hours
  $fields['library-field_opening_hours'] = array(
    'field_name' => 'field_opening_hours',
    'type_name' => 'library',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
    'type' => 'office_hours',
    'required' => '0',
    'multiple' => '1',
    'module' => 'office_hours',
    'active' => '1',
    'allow_hours_past_midnight' => '',
    'display_none_as_closed' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'scope' => 'all',
          'mon' => array(),
          'tue' => array(),
          'wed' => array(),
          'thu' => array(),
          'fri' => array(),
          'sat' => array(),
          'sun' => array(),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Åbningstider',
      'weight' => '3',
      'description' => '',
      'type' => 'office_hours_week',
      'module' => 'office_hours',
    ),
  );

  // Exported field: field_pc_booking_method
  $fields['library-field_pc_booking_method'] = array(
    'field_name' => 'field_pc_booking_method',
    'type_name' => 'library',
    'display_settings' => array(
      'weight' => '10',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'iframe
popup',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'iframe',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Pc-booking-metode',
      'weight' => '10',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_pc_booking_url
  $fields['library-field_pc_booking_url'] = array(
    'field_name' => 'field_pc_booking_url',
    'type_name' => 'library',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Pc-booking-URL',
      'weight' => '9',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('E-mail');
  t('Faciliteter');
  t('Hovedbillede');
  t('Indholdsbilleder');
  t('Links');
  t('Listevisningsbillede');
  t('Pc-booking-URL');
  t('Pc-booking-metode');
  t('Åbningstider');

  return $fields;
}
