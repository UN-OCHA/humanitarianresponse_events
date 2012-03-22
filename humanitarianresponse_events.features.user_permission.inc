<?php
/**
 * @file
 * humanitarianresponse_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'date_repeat_field',
  );

  return $permissions;
}
