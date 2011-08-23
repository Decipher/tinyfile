<?php
/**
 * @file
 * User module integration.
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function tinyfile_user_default_permissions() {
  $permissions = array();

  // Exported permission: create tinyfile content
  $permissions['create tinyfile content'] = array(
    'name' => 'create tinyfile content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
