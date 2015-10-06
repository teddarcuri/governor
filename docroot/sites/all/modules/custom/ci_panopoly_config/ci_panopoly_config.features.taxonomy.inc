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
    'goals' => array(
      'name' => 'Goals',
      'machine_name' => 'goals',
      'description' => 'Specify the Goal type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
