<?php
/**
 * @file
 * ci_panopoly_config.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function ci_panopoly_config_conditional_fields_default_fields() {
  $items = array();

  $items["node:panopoly_page:0"] = array(
    'entity' => 'node',
    'bundle' => 'panopoly_page',
    'dependent' => 'field_goals',
    'dependee' => 'field_featured_categories',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 0,
        2 => 0,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
        4 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => array(
        1 => 1,
        8 => NULL,
        7 => NULL,
        9 => NULL,
      ),
      'value' => array(
        0 => array(
          'tid' => 1,
        ),
      ),
      'values' => array(),
    ),
  );

  return $items;
}
