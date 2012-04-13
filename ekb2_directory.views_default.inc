<?php

/**
 * Implementation of hook_views_default_views().
 */
function ekb2_directory_views_default_views() {
  $views = array();

  // Exported view: test_user_dir
  $view = new view;
  $view->name = 'test_user_dir';
  $view->description = 'User/Forum User directory test created on April 13, 2012';
  $view->tag = '';
  $view->base_table = 'users';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'content_profile_rel' => array(
      'label' => 'Content Profile',
      'required' => 0,
      'type' => 'profile',
      'id' => 'content_profile_rel',
      'table' => 'users',
      'field' => 'content_profile_rel',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'picture' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'exclude' => 0,
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'content_profile_rel',
    ),
    'field_full_name_value' => array(
      'id' => 'field_full_name_value',
      'table' => 'node_data_field_full_name',
      'field' => 'field_full_name_value',
    ),
    'field_job_department_value' => array(
      'label' => 'Department',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
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
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_job_department_value',
      'table' => 'node_data_field_job_department',
      'field' => 'field_job_department_value',
      'relationship' => 'content_profile_rel',
    ),
    'field_job_title_value' => array(
      'id' => 'field_job_title_value',
      'table' => 'node_data_field_job_title',
      'field' => 'field_job_title_value',
    ),
    'field_job_location_value' => array(
      'id' => 'field_job_location_value',
      'table' => 'node_data_field_job_location',
      'field' => 'field_job_location_value',
    ),
    'field_phone_num_value' => array(
      'id' => 'field_phone_num_value',
      'table' => 'node_data_field_phone_num',
      'field' => 'field_phone_num_value',
    ),
  ));
  $handler->override_option('filters', array(
    'rid' => array(
      'operator' => 'or',
      'value' => array(
        21 => '21',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'rid',
      'table' => 'users_roles',
      'field' => 'rid',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'keys' => array(
      'operator' => 'optional',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'label' => 'Search: Search Terms',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'relationship' => 'content_profile_rel',
    ),
    'field_job_department_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_job_department_value_many_to_one_op',
        'identifier' => 'field_job_department_value_many_to_one',
        'label' => 'Content: Department (field_job_department) - Allowed values',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_job_department_value_many_to_one',
      'table' => 'node_data_field_job_department',
      'field' => 'field_job_department_value_many_to_one',
      'relationship' => 'content_profile_rel',
      'override' => array(
        'button' => 'Override',
      ),
      'reduce_duplicates' => 0,
    ),
    'field_job_location_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_job_location_value_many_to_one_op',
        'identifier' => 'field_job_location_value_many_to_one',
        'label' => 'Content: Location (field_job_location) - Allowed values',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_job_location_value_many_to_one',
      'table' => 'node_data_field_job_location',
      'field' => 'field_job_location_value_many_to_one',
      'relationship' => 'content_profile_rel',
      'override' => array(
        'button' => 'Override',
      ),
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 20);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'grid');
  $handler->override_option('style_options', array(
    'columns' => '5',
    'alignment' => 'horizontal',
    'fill_single_line' => 1,
    'summary' => '',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'views/users/directory');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'primary-links',
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
