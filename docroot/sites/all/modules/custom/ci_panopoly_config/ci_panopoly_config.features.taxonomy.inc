<?php
/**
 * @file
 * ci_panopoly_config.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ci_panopoly_config_taxonomy_default_vocabularies() {
  return array(
    'archive_option' => array(
      'name' => 'Archive Option',
      'machine_name' => 'archive_option',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
