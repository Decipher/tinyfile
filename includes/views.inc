<?php
/**
 * @file
 * Views module integration.
 */

/**
 * Implements hook_views_api().
 */
function tinyfile_views_api() {
  return array('api' => 2.0);
}

/**
 * Implements hook_views_data().
 *
 * @TODO - This really belongs in the Bouncer module, but for necessity of a
 * fully functional module for the DrupalCon London 2011 Drupal Module Developer
 * Challenge.
 */
function tinyfile_views_data() {
  $data = array();

  $data['bouncer_redirects']['table']['group'] = t('Bouncer Redirects');
  $data['bouncer_redirects']['table']['base'] = array(
    'field' => 'redirect_timestamp',
    'title' => t('Bouncer Redirect'),
    'help' => t('TODO'),
  );

  // Timestamp
  $data['bouncer_redirects']['redirect_timestamp'] = array(
    'title' => t('Timestamp'),
    'help' => t('Timestamp of Bouncer Redirect.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_date',
    ),
  );

  // @TODO - Add UID field.

  // Target URL
  $data['bouncer_redirects']['target_url'] = array(
    'title' => t('Target URL'),
    'help' => t('Target URL of Bouncer Redirect.'),
    'field' => array(
      'handler' => 'views_handler_field_url',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Host
  $data['bouncer_redirects']['host'] = array(
    'title' => t('Host'),
    'help' => t('Host of Bouncer Redirect.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Referer URL
  $data['bouncer_redirects']['referer_url'] = array(
    'title' => t('Referer URL'),
    'help' => t('Referer URL of Bouncer Redirect.'),
    'field' => array(
      'handler' => 'views_handler_field_url',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // User Agent
  $data['bouncer_redirects']['user_agent'] = array(
    'title' => t('User Agent'),
    'help' => t('User Agent of Bouncer Redirect.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Remote Address
  $data['bouncer_redirects']['remote_address'] = array(
    'title' => t('Remote Address'),
    'help' => t('Remote Address of Bouncer Redirect.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Context
  $data['bouncer_redirects']['context'] = array(
    'title' => t('Context'),
    'help' => t('Context of Bouncer Redirect.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  return $data;
}

/**
 * Implements hook_views_default_views().
 */
function tinyfile_views_default_views() {
  $views = array();

  // Exported view: tinyFile
  $view = new view;
  $view->name = 'tinyFile';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'bouncer_redirects';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'redirect_timestamp' => array(
      'label' => 'Timestamp',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'redirect_timestamp',
      'table' => 'bouncer_redirects',
      'field' => 'redirect_timestamp',
      'relationship' => 'none',
    ),
    'target_url' => array(
      'label' => 'Target URL',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'display_as_link' => 1,
      'exclude' => 0,
      'id' => 'target_url',
      'table' => 'bouncer_redirects',
      'field' => 'target_url',
      'relationship' => 'none',
    ),
    'host' => array(
      'label' => 'Host',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'host',
      'table' => 'bouncer_redirects',
      'field' => 'host',
      'relationship' => 'none',
    ),
    'referer_url' => array(
      'label' => 'Referer URL',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'display_as_link' => 1,
      'exclude' => 0,
      'id' => 'referer_url',
      'table' => 'bouncer_redirects',
      'field' => 'referer_url',
      'relationship' => 'none',
    ),
    'user_agent' => array(
      'label' => 'User Agent',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'user_agent',
      'table' => 'bouncer_redirects',
      'field' => 'user_agent',
      'relationship' => 'none',
    ),
    'remote_address' => array(
      'label' => 'Remote Address',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'remote_address',
      'table' => 'bouncer_redirects',
      'field' => 'remote_address',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'context' => array(
      'operator' => '=',
      'value' => 'tinyfile',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'case' => 1,
      'id' => 'context',
      'table' => 'bouncer_redirects',
      'field' => 'context',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'tinyFile report');
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 25);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'reports/tinyfile');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
