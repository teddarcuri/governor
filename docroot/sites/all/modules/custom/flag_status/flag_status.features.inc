<?php
/**
 * @file
 * flag_status.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function flag_status_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function flag_status_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function flag_status_node_info() {
  $items = array(
    'flag' => array(
      'name' => t('Flag'),
      'base' => 'node_content',
      'description' => t('Flag Status updates are created here.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
