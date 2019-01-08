<?php
/**
 * @file
 * luggage_bean_stat.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function luggage_bean_stat_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__stat';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '0',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'revision' => array(
          'weight' => '6',
        ),
        'view_mode' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_bean__stat'] = $strongarm;

  return $export;
}
