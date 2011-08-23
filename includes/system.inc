<?php
/**
 * @file
 * System module integration.
 */

/**
 * Implements hook_hook_nodeapi().
 */
function tinyfile_nodeapi(&$node, $op, $a3 = NULL, $a4 = NULL) {
  drupal_alter('tinyfile_nodeapi', $node, $op, $a3, $a4);
}

/**
 * Implements hook_form_alter().
 */
function tinyfile_form_alter(&$form, &$form_state, $form_id) {
  drupal_alter('tinyfile_form_alter', $form, $form_state, $form_id);
}
