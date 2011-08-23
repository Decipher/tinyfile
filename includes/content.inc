<?php
/**
 * @file
 * Content module integration.
 */

/**
 * Implements hook_content_default_fields().
 */
function tinyfile_content_default_fields() {
  $fields = array();

  // Exported field: field_tinyfile_file
  $fields['tinyfile-field_tinyfile_file'] = array(
    'field_name' => 'field_tinyfile_file',
    'type_name' => 'tinyfile',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-19',
      'tinyfile' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'mobile_codes_filefield_large',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_tinyfile_file',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-19',
      ),
      'weight' => '31',
      'parent' => '',
      'teaser' => array(
        'format' => 'mobile_codes_filefield_block_node_url',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'mobile_codes_filefield_block_node_url',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'custom_formatters_test' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'File',
      'weight' => '31',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('File');

  return $fields;
}
