<?php
/**
 * @file
 * Mobile Codes module integration.
 */

/**
 * Implements hook_mobile_codes_settings_alter().
 */
function tinyfile_mobile_codes_settings_alter($settings) {
  $settings['url']['tinyfile'] = array(
    'label' => t('tinyFile campaign'),
    'description' => t('tinyFile campaign for "Track URL" setting.'),
    'weight' => 6
  );
}

/**
 * Implements mobile_codes_data_TYPE_SETTING().
 */
function mobile_codes_data_url_tinyfile(&$data) {
  if (strstr($data, urlencode('?tinyFile'))) {
    $data = str_replace(urlencode('?tinyFile'), '&c=tinyFile', $data);
  }
}
