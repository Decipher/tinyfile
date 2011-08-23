<?php
/**
 * @file
 * Node module integration.
 */

/**
 * Implements hook_node_info().
 */
function tinyfile_node_info() {
  $items = array(
    'tinyfile' => array(
      'name' => t('tinyFile'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_tinyfile_form_alter_alter() on behalf of node.module.
 */
function node_tinyfile_form_alter_alter($form, $form_state, $form_id) {
  if ($form_id == 'tinyfile_node_form') {
    $form['#after_build'] = is_array($form['#after_build']) ? $form['#after_build'] : array();
    $form['#after_build'][] = 'tinyfile_node_form_after_build';
  }
}

/**
 * Form callback; After build.
 */
function tinyfile_node_form_after_build($element) {
  drupal_add_js(drupal_get_path('module', 'tinyfile') . '/tinyfile.js');
  return $element;
}

/**
 * Implements hook_tinyfile_nodeapi_alter() on behalf of node.module.
 */
function node_tinyfile_nodeapi_alter($node, $op, $a3, $a4) {
  if ($op == 'insert' && $node->type == 'tinyfile') {
    $node->build_mode = 'tinyfile';
    drupal_json(array(
      'success' => TRUE,
      'data' => node_view($node),
    ));
    exit;
  }
}
