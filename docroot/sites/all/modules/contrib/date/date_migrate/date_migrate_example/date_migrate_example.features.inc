<?php
/**
 * @file
 * date_migrate_example.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function date_migrate_example_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function date_migrate_example_node_info() {
  $items = array(
    'date_migrate_example' => array(
      'name' => t('Migrate example - dates'),
      'base' => 'node_content',
      'description' => t('This content type is used for demonstrating and testing migration into Date fields.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
