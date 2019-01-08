<?php
/**
 * @file
 * luggage_bean_stat.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function luggage_bean_stat_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'stat';
  $bean_type->label = 'Stat';
  $bean_type->options = '';
  $bean_type->description = 'Showcase a statistic with an icon, large title, caption, and button.';
  $export['stat'] = $bean_type;

  return $export;
}
