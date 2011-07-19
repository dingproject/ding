<?php

/**
 * Implementation of hook_strongarm().
 */
function ding_base_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'rubik';

  $export['admin_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_fieldset_title';
  $strongarm->value = '';

  $export['better_formats_fieldset_title'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_long_tips_link_text';
  $strongarm->value = '';

  $export['better_formats_long_tips_link_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_per_node_type';
  $strongarm->value = 1;

  $export['better_formats_per_node_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_short';
  $strongarm->value = 'd-m-Y';

  $export['date_format_date_short'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l, j. F Y - G:i';

  $export['date_format_long'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'j. F Y - G:i';

  $export['date_format_medium'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'Y-m-d H:i';

  $export['date_format_short'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_oembedcore_provider';
  $strongarm->value = array(
    'youtube' => FALSE,
    'vimeo' => FALSE,
    'revision3' => FALSE,
    'qik' => FALSE,
    'flickr' => FALSE,
    'viddler' => FALSE,
  );

  $export['default_oembedcore_provider'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmLawed_format_1';
  $strongarm->value = array(
    'article' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'campaign' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'event' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'feature' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'library' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'flexifield_link' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'page' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'profile' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'flexifield_text' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'flexifield_ting_refs' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'topic' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'htmLawedDef' => array(
      'Body' => array(
        'config' => '\'safe\'=>1, \'elements\'=>\'h1, h2, h3, h4, h5, h6, em, strong, code, del, blockquote, q, sub, p, br, pre, ul, ol, li, dl, dt, dd, a, b, u, i, sup, img, table, tbody, td, th, tr\', \'deny_attribute\'=>\'id, style\', \'make_tag_strict\'=>1, \'no_deprecated_attr\'=>1, \'tidy\'=>1, \'valid_xhtml\'=>1',
        'spec' => '',
        'help' => '',
      ),
      'Comment' => array(
        'config' => '\'safe\'=>1, \'elements\'=>\'h1, h2, h3, h4, h5, h6, em, strong, code, del, blockquote, q, sub, p, br, pre, ul, ol, li, dl, dt, dd, a, b, u, i, sup, img, table, tbody, td, th, tr\', \'deny_attribute\'=>\'id, style\', \'make_tag_strict\'=>1, \'no_deprecated_attr\'=>1, \'tidy\'=>1, \'valid_xhtml\'=>1',
        'spec' => '',
        'help' => '',
      ),
      'Other' => array(
        'config' => '\'safe\'=>1, \'elements\'=>\'h1, h2, h3, h4, h5, h6, em, strong, code, del, blockquote, q, sub, p, br, pre, ul, ol, li, dl, dt, dd, a, b, u, i, sup, img, table, tbody, td, th, tr\', \'deny_attribute\'=>\'id, style\', \'make_tag_strict\'=>1, \'no_deprecated_attr\'=>1, \'tidy\'=>1, \'valid_xhtml\'=>1',
        'spec' => '',
        'help' => '',
        'show' => 1,
      ),
      'RSS' => array(
        'config' => '\'safe\'=>1, \'elements\'=>\'h1, h2, h3, h4, h5, h6, em, strong, code, del, blockquote, q, sub, p, br, pre, ul, ol, li, dl, dt, dd, a, b, u, i, sup, img, table, tbody, td, th, tr\', \'deny_attribute\'=>\'id, style\', \'make_tag_strict\'=>1, \'no_deprecated_attr\'=>1, \'tidy\'=>1, \'valid_xhtml\'=>1',
        'spec' => '',
        'help' => '',
      ),
    ),
  );

  $export['htmLawed_format_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmLawed_format_2';
  $strongarm->value = array(
    'article' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'campaign' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'event' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'feature' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'library' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'flexifield_link' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'page' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'profile' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'flexifield_text' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'flexifield_ting_refs' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'topic' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'htmLawedDef' => array(
      'Body' => array(
        'config' => '\'safe\'=>1, \'elements\'=>\'h1, h2, h3, h4, h5, h6, em, strong, code, del, blockquote, q, sub, p, br, pre, ul, ol, li, dl, dt, dd, a, b, u, i, sup, img, table, tbody, td, th, tr\', \'deny_attribute\'=>\'id, style\', \'make_tag_strict\'=>1, \'no_deprecated_attr\'=>1, \'tidy\'=>1, \'valid_xhtml\'=>1',
        'spec' => '',
        'help' => '',
      ),
      'Comment' => array(
        'config' => '\'safe\'=>1, \'elements\'=>\'h1, h2, h3, h4, h5, h6, em, strong, code, del, blockquote, q, sub, p, br, pre, ul, ol, li, dl, dt, dd, a, b, u, i, sup, img, table, tbody, td, th, tr\', \'deny_attribute\'=>\'id, style\', \'make_tag_strict\'=>1, \'no_deprecated_attr\'=>1, \'tidy\'=>1, \'valid_xhtml\'=>1',
        'spec' => '',
        'help' => '',
      ),
      'Other' => array(
        'config' => '\'safe\'=>1, \'elements\'=>\'h1, h2, h3, h4, h5, h6, em, strong, code, del, blockquote, q, sub, p, br, pre, ul, ol, li, dl, dt, dd, a, b, u, i, sup, img, table, tbody, td, th, tr\', \'deny_attribute\'=>\'id, style\', \'make_tag_strict\'=>1, \'no_deprecated_attr\'=>1, \'tidy\'=>1, \'valid_xhtml\'=>1',
        'spec' => '',
        'help' => '',
        'show' => 1,
      ),
      'RSS' => array(
        'config' => '\'safe\'=>1, \'elements\'=>\'h1, h2, h3, h4, h5, h6, em, strong, code, del, blockquote, q, sub, p, br, pre, ul, ol, li, dl, dt, dd, a, b, u, i, sup, img, table, tbody, td, th, tr\', \'deny_attribute\'=>\'id, style\', \'make_tag_strict\'=>1, \'no_deprecated_attr\'=>1, \'tidy\'=>1, \'valid_xhtml\'=>1',
        'spec' => '',
        'help' => '',
      ),
    ),
  );

  $export['htmLawed_format_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmLawed_format_3';
  $strongarm->value = array(
    'library' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'article' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'topic' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'event' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'feature' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'campaign' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'flexifield_link' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'profile' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'page' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'flexifield_text' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'flexifield_ting_refs' => array(
      'Body' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'Comment' => array(
        'default' => 1,
        'show' => 1,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd',
        'save' => 0,
      ),
      'RSS' => array(
        'default' => 1,
        'show' => 0,
        'config' => '\'safe\'=>1, \'elements\'=>\'a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p\', \'deny_attribute\'=>\'id, style\'',
        'spec' => '',
        'help' => 'Tags allowed: a, em, strong, cite, code, ol, ul, li, dl, dt, dd, br, p',
      ),
    ),
    'htmLawedDef' => array(
      'Body' => array(
        'config' => '\'safe\'=>1, \'elements\'=>\'h1, h2, h3, h4, h5, h6, em, strong, code, del, blockquote, q, sub, p, br, pre, ul, ol, li, dl, dt, dd, a, b, u, i, sup, img, table, tbody, td, th, tr\', \'deny_attribute\'=>\'\', \'make_tag_strict\'=>1, \'no_deprecated_attr\'=>1, \'tidy\'=>1, \'valid_xhtml\'=>1',
        'spec' => '',
        'help' => '',
      ),
      'Comment' => array(
        'config' => '\'safe\'=>1, \'elements\'=>\'h1, h2, h3, h4, h5, h6, em, strong, code, del, blockquote, q, sub, p, br, pre, ul, ol, li, dl, dt, dd, a, b, u, i, sup, img, table, tbody, td, th, tr\', \'deny_attribute\'=>\'id, style\', \'make_tag_strict\'=>1, \'no_deprecated_attr\'=>1, \'tidy\'=>1, \'valid_xhtml\'=>1',
        'spec' => '',
        'help' => '',
      ),
      'Other' => array(
        'config' => '\'safe\'=>1, \'elements\'=>\'h1, h2, h3, h4, h5, h6, em, strong, code, del, blockquote, q, sub, p, br, pre, ul, ol, li, dl, dt, dd, a, b, u, i, sup, img, table, tbody, td, th, tr\', \'deny_attribute\'=>\'id, style\', \'make_tag_strict\'=>1, \'no_deprecated_attr\'=>1, \'tidy\'=>1, \'valid_xhtml\'=>1',
        'spec' => '',
        'help' => '',
        'show' => 1,
      ),
      'RSS' => array(
        'config' => '\'safe\'=>1, \'elements\'=>\'h1, h2, h3, h4, h5, h6, em, strong, code, del, blockquote, q, sub, p, br, pre, ul, ol, li, dl, dt, dd, a, b, u, i, sup, img, table, tbody, td, th, tr\', \'deny_attribute\'=>\'id, style\', \'make_tag_strict\'=>1, \'no_deprecated_attr\'=>1, \'tidy\'=>1, \'valid_xhtml\'=>1',
        'spec' => '',
        'help' => '',
      ),
    ),
  );

  $export['htmLawed_format_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;

  $export['page_manager_node_view_disabled'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_term_view_disabled';
  $strongarm->value = FALSE;

  $export['page_manager_term_view_disabled'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_view_disabled';
  $strongarm->value = FALSE;

  $export['page_manager_user_view_disabled'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_case';
  $strongarm->value = '1';

  $export['pathauto_case'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_contact_bulkupdate';
  $strongarm->value = 0;

  $export['pathauto_contact_bulkupdate'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_contact_pattern';
  $strongarm->value = '';

  $export['pathauto_contact_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_contact_supportsfeeds';
  $strongarm->value = '';

  $export['pathauto_contact_supportsfeeds'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ignore_words';
  $strongarm->value = 'og,i,jeg,det,at,en,den,til,er,som,paa,de,med,han,af,for,ikke,der,var,mig,sig,men,et,har,om,vi,min,havde,ham,hun,nu,over,da,fra,du,ud,sin,dem,os,op,man,hans,hvor,eller,hvad,skal,selv,her,alle,vil,blev,kunne,ind,naar,vaere,dog,noget,ville,jo,deres,efter,ned,skulle,denne,end,dette,mit,ogsaa,under,have,dig,anden,hende,mine,alt,meget,sit,sine,vor,mod,disse,hvis,din,nogle,hos,blive,mange,ad,bliver,hendes,vaeret,thi,jer,saadan';

  $export['pathauto_ignore_words'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_indexaliases';
  $strongarm->value = FALSE;

  $export['pathauto_indexaliases'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_indexaliases_bulkupdate';
  $strongarm->value = FALSE;

  $export['pathauto_indexaliases_bulkupdate'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_max_bulk_update';
  $strongarm->value = '50';

  $export['pathauto_max_bulk_update'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_max_component_length';
  $strongarm->value = '100';

  $export['pathauto_max_component_length'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_max_length';
  $strongarm->value = '100';

  $export['pathauto_max_length'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_modulelist';
  $strongarm->value = array(
    0 => 'contact',
    1 => 'node',
    2 => 'taxonomy',
    3 => 'user',
  );

  $export['pathauto_modulelist'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_applytofeeds';
  $strongarm->value = '';

  $export['pathauto_node_applytofeeds'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_bulkupdate';
  $strongarm->value = FALSE;

  $export['pathauto_node_bulkupdate'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[title-raw]';

  $export['pathauto_node_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_supportsfeeds';
  $strongarm->value = 'feed';

  $export['pathauto_node_supportsfeeds'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_ampersand';
  $strongarm->value = '0';

  $export['pathauto_punctuation_ampersand'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_asterisk';
  $strongarm->value = '0';

  $export['pathauto_punctuation_asterisk'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_at';
  $strongarm->value = '0';

  $export['pathauto_punctuation_at'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_back_slash';
  $strongarm->value = '0';

  $export['pathauto_punctuation_back_slash'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_backtick';
  $strongarm->value = '0';

  $export['pathauto_punctuation_backtick'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_caret';
  $strongarm->value = '0';

  $export['pathauto_punctuation_caret'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_colon';
  $strongarm->value = '0';

  $export['pathauto_punctuation_colon'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_comma';
  $strongarm->value = '0';

  $export['pathauto_punctuation_comma'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_dollar';
  $strongarm->value = '0';

  $export['pathauto_punctuation_dollar'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_double_quotes';
  $strongarm->value = '0';

  $export['pathauto_punctuation_double_quotes'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_equal';
  $strongarm->value = '0';

  $export['pathauto_punctuation_equal'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_exclamation';
  $strongarm->value = '0';

  $export['pathauto_punctuation_exclamation'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_greater_than';
  $strongarm->value = '0';

  $export['pathauto_punctuation_greater_than'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hash';
  $strongarm->value = '0';

  $export['pathauto_punctuation_hash'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;

  $export['pathauto_punctuation_hyphen'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_left_curly';
  $strongarm->value = '0';

  $export['pathauto_punctuation_left_curly'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_left_parenthesis';
  $strongarm->value = '0';

  $export['pathauto_punctuation_left_parenthesis'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_left_square';
  $strongarm->value = '0';

  $export['pathauto_punctuation_left_square'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_less_than';
  $strongarm->value = '0';

  $export['pathauto_punctuation_less_than'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_percent';
  $strongarm->value = '0';

  $export['pathauto_punctuation_percent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_period';
  $strongarm->value = '0';

  $export['pathauto_punctuation_period'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_pipe';
  $strongarm->value = '0';

  $export['pathauto_punctuation_pipe'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_plus';
  $strongarm->value = '0';

  $export['pathauto_punctuation_plus'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_question_mark';
  $strongarm->value = '0';

  $export['pathauto_punctuation_question_mark'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_quotes';
  $strongarm->value = '0';

  $export['pathauto_punctuation_quotes'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_right_curly';
  $strongarm->value = '0';

  $export['pathauto_punctuation_right_curly'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_right_parenthesis';
  $strongarm->value = '0';

  $export['pathauto_punctuation_right_parenthesis'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_right_square';
  $strongarm->value = '0';

  $export['pathauto_punctuation_right_square'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_semicolon';
  $strongarm->value = '0';

  $export['pathauto_punctuation_semicolon'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_tilde';
  $strongarm->value = '0';

  $export['pathauto_punctuation_tilde'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_underscore';
  $strongarm->value = '0';

  $export['pathauto_punctuation_underscore'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_reduce_ascii';
  $strongarm->value = 1;

  $export['pathauto_reduce_ascii'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_separator';
  $strongarm->value = '-';

  $export['pathauto_separator'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_1_pattern';
  $strongarm->value = 'taksonomi/artikel/[catpath-raw]';

  $export['pathauto_taxonomy_1_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_4_pattern';
  $strongarm->value = 'taksonomi/arrangement/[catpath-raw]';

  $export['pathauto_taxonomy_4_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_5_pattern';
  $strongarm->value = 'taksonomi/arrangement/[catpath-raw]';

  $export['pathauto_taxonomy_5_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_applytofeeds';
  $strongarm->value = '';

  $export['pathauto_taxonomy_applytofeeds'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_bulkupdate';
  $strongarm->value = 0;

  $export['pathauto_taxonomy_bulkupdate'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_pattern';
  $strongarm->value = '[vocab-raw]/[catpath-raw]';

  $export['pathauto_taxonomy_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_supportsfeeds';
  $strongarm->value = '0/feed';

  $export['pathauto_taxonomy_supportsfeeds'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_transliterate';
  $strongarm->value = 1;

  $export['pathauto_transliterate'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_update_action';
  $strongarm->value = '2';

  $export['pathauto_update_action'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_bulkupdate';
  $strongarm->value = 0;

  $export['pathauto_user_bulkupdate'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user-raw]';

  $export['pathauto_user_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_supportsfeeds';
  $strongarm->value = '';

  $export['pathauto_user_supportsfeeds'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_verbose';
  $strongarm->value = 0;

  $export['pathauto_verbose'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securepages_basepath';
  $strongarm->value = '';

  $export['securepages_basepath'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securepages_basepath_ssl';
  $strongarm->value = '';

  $export['securepages_basepath_ssl'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securepages_enable';
  $strongarm->value = '1';

  $export['securepages_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securepages_ignore';
  $strongarm->value = '*/autocomplete/*
*/ajax/*';

  $export['securepages_ignore'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securepages_pages';
  $strongarm->value = 'node/add*
node/*/edit
user/*
users/*
admin*
profil/*
medarbejdere/*';

  $export['securepages_pages'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securepages_secure';
  $strongarm->value = '1';

  $export['securepages_secure'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securepages_switch';
  $strongarm->value = TRUE;

  $export['securepages_switch'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_name' => 1,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'mothership_cleanup_body_remove' => 0,
    'mothership_cleanup_body_front' => 0,
    'mothership_cleanup_body_front_not' => 0,
    'mothership_cleanup_body_loggedin' => 0,
    'mothership_cleanup_body_loggedin_not' => 0,
    'mothership_cleanup_body_layout' => 0,
    'mothership_cleanup_body_nodetype' => 0,
    'mothership_cleanup_body_pagearg_one' => 0,
    'mothership_cleanup_body_add_path' => 1,
    'mothership_cleanup_body_add_last' => 1,
    'mothership_cleanup_body_actions' => 1,
    'mothership_cleanup_body_admin' => 0,
    'mothership_cleanup_node_node' => 1,
    'mothership_cleanup_node_sticky' => 0,
    'mothership_cleanup_node_published' => 1,
    'mothership_cleanup_node_promoted' => 0,
    'mothership_cleanup_node_content_type' => 1,
    'mothership_cleanup_node_teaser' => 1,
    'mothership_cleanup_node_id' => 1,
    'mothership_cleanup_block_block' => 1,
    'mothership_cleanup_block_module' => 1,
    'mothership_cleanup_block_region_zebra' => 0,
    'mothership_cleanup_block_region_count' => 0,
    'mothership_cleanup_block_loggedin' => 0,
    'mothership_cleanup_block_front' => 0,
    'mothership_cleanup_block_zebra' => 0,
    'mothership_cleanup_block_count' => 0,
    'mothership_cleanup_block_id' => 1,
    'mothership_cleanup_comment_comment' => 1,
    'mothership_cleanup_comment_new' => 1,
    'mothership_cleanup_comment_status' => 1,
    'mothership_cleanup_comment_first' => 0,
    'mothership_cleanup_comment_last' => 0,
    'mothership_cleanup_comment_zebra' => 0,
    'mothership_cleanup_comment_front' => 0,
    'mothership_cleanup_comment_loggedin' => 0,
    'mothership_cleanup_comment_user' => 0,
    'mothership_cleanup_views_row_identify' => 1,
    'mothership_cleanup_views_first_last' => 1,
    'mothership_cleanup_views_zebra' => 0,
    'mothership_cleanup_views_row_count' => 1,
    'mothership_cleanup_views_table_first_last' => 0,
    'mothership_cleanup_views_table_zebra' => 0,
    'mothership_cleanup_views_table_row_count' => 0,
    'mothership_cleanup_menu_baseclass' => 1,
    'mothership_cleanup_menu_leafs' => 1,
    'mothership_cleanup_menu_classes_active' => 1,
    'mothership_cleanup_menu_classes_first_last' => 1,
    'mothership_cleanup_links_baseclass' => 1,
    'mothership_cleanup_links_classes_active' => 0,
    'mothership_cleanup_links_classes_first_last' => 0,
    'mothership_stylesheet_load_order' => 1,
    'mothership_stylesheet_conditional' => 1,
    'mothership_item_list_first_last' => 1,
    'mothership_item_list_zebra' => 1,
    'mothership_cleanup_user_verified' => 1,
    'mothership_rebuild_registry' => 0,
    'mothership_cleanup_node_regions' => 1,
  );

  $export['theme_settings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 0;

  $export['user_register'] = $strongarm;
  return $export;
}
