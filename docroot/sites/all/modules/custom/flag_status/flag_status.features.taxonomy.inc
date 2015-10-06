<?php
/**
 * @file
 * flag_status.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function flag_status_taxonomy_default_vocabularies() {
  return array(
    'flag_status' => array(
      'name' => 'Flag Status',
      'machine_name' => 'flag_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
