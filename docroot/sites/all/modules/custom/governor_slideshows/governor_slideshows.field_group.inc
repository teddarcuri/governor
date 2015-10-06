<?php
/**
 * @file
 * governor_slideshows.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function governor_slideshows_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_beanslide_caption|field_collection_item|field_beanslide_slides|default';
  $field_group->group_name = 'group_beanslide_caption';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_beanslide_slides';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caption',
    'weight' => '1',
    'children' => array(
      0 => 'field_slide_headline',
      1 => 'field_slide_link',
      2 => 'field_slide_teaser',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caption',
      'instance_settings' => array(
        'classes' => 'caption',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_beanslide_caption|field_collection_item|field_beanslide_slides|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gov_options|field_collection_item|field_beanslide_slides|form';
  $field_group->group_name = 'group_gov_options';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_beanslide_slides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Governor Options',
    'weight' => '0',
    'children' => array(
      0 => 'field_governor_image',
      1 => 'field_governor_slide',
      2 => 'field_position',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gov_options|field_collection_item|field_beanslide_slides|form'] = $field_group;

  return $export;
}
