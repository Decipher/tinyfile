<?php
/**
 * @file
 * Custom Formatters module integration.
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function tinyfile_custom_formatters_defaults() {
  $formatters = array();

  // tinyFile formatter.
  $formatters['tinyfile'] = array(
    'name' => 'tinyfile',
    'label' => 'tinyFile formatter',
    'field_types' => 'a:1:{i:0;s:9:"filefield";}',
    'multiple' => '0',
    'description' => '',
    'mode' => 'advanced',
    'code' => 'return theme(\'mobilecode\', url($element[\'#item\'][\'filepath\'], array(\'query\' => \'tinyFile\', \'absolute\' => TRUE)), array(\'#preset\' => \'large\'));',
    'status' => '1',
    'source' => 'module',
  );

  return $formatters;
}
