<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ekb2_directory_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ekb2_directory_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('User Profile'),
      'module' => 'features',
      'description' => t('A user profile built as content.'),
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
 * Implementation of hook_views_api().
 */
function ekb2_directory_views_api() {
  return array(
    'api' => '2',
  );
}
