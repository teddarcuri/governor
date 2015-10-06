<?php
/**
 * @file
 * goals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function goals_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function goals_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function goals_node_info() {
  $items = array(
    'goals' => array(
      'name' => t('Goals'),
      'base' => 'node_content',
      'description' => t('Create goals using the Goals content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
