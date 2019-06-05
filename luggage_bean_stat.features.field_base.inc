<?php
/**
 * @file
 * luggage_bean_stat.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function luggage_bean_stat_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_stat_button'.
  $field_bases['field_stat_button'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_stat_button',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_stat_caption'.
  $field_bases['field_stat_caption'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_stat_caption',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_stat_color_variant'.
  $field_bases['field_stat_color_variant'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_stat_color_variant',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'stat-bean_white' => 'White',
        'stat-bean_red' => 'Red',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_stat_icon'.
  $field_bases['field_stat_icon'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_stat_icon',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'fa-users' => 'Users',
        'fa-book ' => ' Book',
        'fa-pencil ' => ' Pencil',
        'fa-desktop' => 'Computer',
        'fa-play-circle ' => ' Play Button',
        'fa-newspaper-o' => 'Newspaper',
        'fa-calendar' => 'Calendar',
        'fa-file-text-o' => 'Text Document',
        'fa-envelope-o' => 'Envelope',
        'fa-phone' => 'Phone',
        'fa-star-o' => 'Star',
        'fa-heart-o' => 'Heart',
        'fa-map-marker' => 'Map Marker',
        'fa-graduation-cap' => 'Graduation Cap',
        'fa-check' => 'Checkmark',
        'fa-list-ul' => 'List',
        'fa-question-circle' => 'Question Mark',
        'fa-info-circle' => 'Info',
        'fa-arrow-right' => 'Arrow Right',
        'fa-download' => 'Download',
        'fa-area-chart' => 'Area Chart',
        'fa-bar-chart' => 'Bar Chart',
        'fa-pie-chart' => 'Pie Chart',
        'fa-facebook-official' => 'Facebook',
        'fa-twitter' => 'Twitter',
        'fa-youtube' => 'YouTube',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
