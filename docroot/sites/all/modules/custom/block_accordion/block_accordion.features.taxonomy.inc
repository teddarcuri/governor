<?php
/**
 * @file
 * block_accordion.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function block_accordion_taxonomy_default_vocabularies() {
  return array(
    'accordion_block_style' => array(
      'name' => 'Accordion Block Style',
      'machine_name' => 'accordion_block_style',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
