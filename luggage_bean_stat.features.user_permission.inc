<?php
/**
 * @file
 * luggage_bean_stat.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_bean_stat_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any stat bean'.
  $permissions['create any stat bean'] = array(
    'name' => 'create any stat bean',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any stat bean'.
  $permissions['delete any stat bean'] = array(
    'name' => 'delete any stat bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any stat bean'.
  $permissions['edit any stat bean'] = array(
    'name' => 'edit any stat bean',
    'roles' => array(
      'bean editor' => 'bean editor',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any stat bean'.
  $permissions['view any stat bean'] = array(
    'name' => 'view any stat bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'bean editor' => 'bean editor',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
