<?php
/**
 * @file
 * Strongarm module integration.
 */

/**
 * Implementation of hook_strongarm().
 */
function tinyfile_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_tinyfile';
  $strongarm->value = 'tinyFile: [field_tinyfile_file-filefield-filename] ([yyyy]-[mm]-[dd])';
  $export['ant_pattern_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_tinyfile';
  $strongarm->value = 0;
  $export['ant_php_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_tinyfile';
  $strongarm->value = '1';
  $export['ant_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_tinyfile';
  $strongarm->value = 0;
  $export['comment_anonymous_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_tinyfile';
  $strongarm->value = '3';
  $export['comment_controls_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_tinyfile';
  $strongarm->value = '4';
  $export['comment_default_mode_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_tinyfile';
  $strongarm->value = '1';
  $export['comment_default_order_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_tinyfile';
  $strongarm->value = '50';
  $export['comment_default_per_page_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_tinyfile';
  $strongarm->value = '0';
  $export['comment_form_location_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_tinyfile';
  $strongarm->value = '1';
  $export['comment_preview_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_tinyfile';
  $strongarm->value = '1';
  $export['comment_subject_field_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_tinyfile';
  $strongarm->value = '2';
  $export['comment_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dragndrop_uploads_formatter_tinyfile';
  $strongarm->value = 'default';
  $export['dragndrop_uploads_formatter_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dragndrop_uploads_hide_tinyfile';
  $strongarm->value = 0;
  $export['dragndrop_uploads_hide_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dragndrop_uploads_widget_tinyfile';
  $strongarm->value = 'a:3:{s:5:"field";s:19:"field_tinyfile_file";s:6:"module";s:9:"filefield";s:6:"widget";s:9:"filefield";}';
  $export['dragndrop_uploads_widget_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'formblock_expose_tinyfile';
  $strongarm->value = '1';
  $export['formblock_expose_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_codes_settings';
  $strongarm->value = array(
    'url' => array(
      'alias' => 1,
      'bouncer' => 1,
      'tinyfile' => 1,
      'shorten' => 1,
    ),
  );
  $export['mobile_codes_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nd_display_settings_tinyfile';
  $strongarm->value = array(
    'tinyfile' => array(
      'fields' => array(
        'field_tinyfile_file' => array(
          'region' => 'middle',
          'weight' => '-19',
          'format' => 'custom_formatters_tinyfile',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'title' => array(
          'region' => 'disabled',
          'weight' => '-96',
          'format' => 'nd_title_h1_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'author' => array(
          'region' => 'disabled',
          'weight' => '-97',
          'format' => 'ds_author_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'links' => array(
          'region' => 'disabled',
          'weight' => '-98',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'read_more' => array(
          'region' => 'disabled',
          'weight' => '-100',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'post_date' => array(
          'region' => 'disabled',
          'weight' => '-99',
          'format' => 'nd_post_date_long',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
      ),
      'status' => 2,
      'region_styles' => array(
        'header' => '',
        'left' => '',
        'middle' => '',
        'right' => '',
        'footer' => '',
      ),
    ),
  );
  $export['nd_display_settings_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nd_type_tinyfile';
  $strongarm->value = 0;
  $export['nd_type_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tinyfile';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_tinyfile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_tinyfile_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'hidden' => 1,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '-2',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '20',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '30',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '25',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '20',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '100',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 1,
    ),
    'field_tinyfile_file' => array(
      'region' => 'main',
      'weight' => '31',
      'has_required' => TRUE,
      'title' => 'File',
    ),
    'dragndrop_uploads' => array(
      'region' => 'main',
      'weight' => '0.017',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 1,
    ),
  );
  $export['nodeformscols_field_placements_tinyfile_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shorten_service';
  $strongarm->value = 'Drupal ShortURL module';
  $export['shorten_service'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shorten_www';
  $strongarm->value = 0;
  $export['shorten_www'] = $strongarm;

  return $export;
}
