<?php
/**
 * @file
 * block_accordion.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function block_accordion_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'fancy_list';
  $bean_type->label = 'Accordion List';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['fancy_list'] = $bean_type;

  return $export;
}
