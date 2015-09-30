<?php
/**
 * @file
 * panopoly_faq.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function panopoly_faq_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panopoly_faq:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_faq';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = 'faq_item_panel';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c602d055-5566-43ad-81d1-869f0c979b61';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-14c027d0-11e1-4660-95a2-54958f411f02';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_half',
      'image_link' => '',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '14c027d0-11e1-4660-95a2-54958f411f02';
  $display->content['new-14c027d0-11e1-4660-95a2-54958f411f02'] = $pane;
  $display->panels['contentmain'][0] = 'new-14c027d0-11e1-4660-95a2-54958f411f02';
  $pane = new stdClass();
  $pane->pid = 'new-cad530b3-627e-46e2-b0d7-2002b6d92dd1';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cad530b3-627e-46e2-b0d7-2002b6d92dd1';
  $display->content['new-cad530b3-627e-46e2-b0d7-2002b6d92dd1'] = $pane;
  $display->panels['contentmain'][1] = 'new-cad530b3-627e-46e2-b0d7-2002b6d92dd1';
  $pane = new stdClass();
  $pane->pid = 'new-79286467-d236-4e6e-adad-e5cff2c73f32';
  $pane->panel = 'contentmain';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '79286467-d236-4e6e-adad-e5cff2c73f32';
  $display->content['new-79286467-d236-4e6e-adad-e5cff2c73f32'] = $pane;
  $display->panels['contentmain'][2] = 'new-79286467-d236-4e6e-adad-e5cff2c73f32';
  $pane = new stdClass();
  $pane->pid = 'new-1a99e93b-31e4-4ac2-a976-515d90d8b43b';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_faq-demo_listing';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
    ),
    'exposed' => array(
      'sort_by' => 'created',
      'sort_order' => 'DESC',
      'widget_title' => 'Other Questions',
      'items_per_page' => '0',
    ),
    'view_mode' => 'teaser',
    'widget_title' => 'Other Questions',
    'items_per_page' => '0',
    'view_settings' => 'fields',
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1a99e93b-31e4-4ac2-a976-515d90d8b43b';
  $display->content['new-1a99e93b-31e4-4ac2-a976-515d90d8b43b'] = $pane;
  $display->panels['sidebar'][0] = 'new-1a99e93b-31e4-4ac2-a976-515d90d8b43b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:panopoly_faq:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panopoly_faq:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_faq';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = 'faq-page-panel';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'da16f7e6-044a-4708-b128-10d63e709d77';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-44e518f8-e07f-4eec-be93-6bbaba8cfee6';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => 'panopoly_image_half',
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '44e518f8-e07f-4eec-be93-6bbaba8cfee6';
  $display->content['new-44e518f8-e07f-4eec-be93-6bbaba8cfee6'] = $pane;
  $display->panels['contentmain'][0] = 'new-44e518f8-e07f-4eec-be93-6bbaba8cfee6';
  $pane = new stdClass();
  $pane->pid = 'new-010a1a75-cf4d-439a-9337-86894e540ab5';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '010a1a75-cf4d-439a-9337-86894e540ab5';
  $display->content['new-010a1a75-cf4d-439a-9337-86894e540ab5'] = $pane;
  $display->panels['contentmain'][1] = 'new-010a1a75-cf4d-439a-9337-86894e540ab5';
  $pane = new stdClass();
  $pane->pid = 'new-acbf7d29-7b9f-4c73-80b6-c1697a39cc6b';
  $pane->panel = 'contentmain';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'default',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'acbf7d29-7b9f-4c73-80b6-c1697a39cc6b';
  $display->content['new-acbf7d29-7b9f-4c73-80b6-c1697a39cc6b'] = $pane;
  $display->panels['contentmain'][2] = 'new-acbf7d29-7b9f-4c73-80b6-c1697a39cc6b';
  $pane = new stdClass();
  $pane->pid = 'new-3eb1a354-782d-4119-9937-c55a394d8ca3';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_faq-demo_listing';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
    ),
    'exposed' => array(
      'sort_by' => 'created',
      'sort_order' => 'DESC',
      'widget_title' => 'Other Questions',
      'items_per_page' => '0',
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Other Questions',
    'items_per_page' => '0',
    'view_settings' => 'fields',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3eb1a354-782d-4119-9937-c55a394d8ca3';
  $display->content['new-3eb1a354-782d-4119-9937-c55a394d8ca3'] = $pane;
  $display->panels['sidebar'][0] = 'new-3eb1a354-782d-4119-9937-c55a394d8ca3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:panopoly_faq:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panopoly_faq:default:featured';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_faq';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->css_class = 'faq-featured-pane';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'phelan';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'dc760ba3-49f5-4faf-bc6e-8034712e94a1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-37d6b0cd-b9a7-442d-a48e-2fd3744cf5a8';
  $pane->panel = 'column1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => 'content',
      'image_style' => 'panopoly_image_featured',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '37d6b0cd-b9a7-442d-a48e-2fd3744cf5a8';
  $display->content['new-37d6b0cd-b9a7-442d-a48e-2fd3744cf5a8'] = $pane;
  $display->panels['column1'][0] = 'new-37d6b0cd-b9a7-442d-a48e-2fd3744cf5a8';
  $pane = new stdClass();
  $pane->pid = 'new-da0b0439-aa54-4761-9582-1f9543417e48';
  $pane->panel = 'column2';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 1,
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'da0b0439-aa54-4761-9582-1f9543417e48';
  $display->content['new-da0b0439-aa54-4761-9582-1f9543417e48'] = $pane;
  $display->panels['column2'][0] = 'new-da0b0439-aa54-4761-9582-1f9543417e48';
  $pane = new stdClass();
  $pane->pid = 'new-7760ea3e-d1a4-4084-af53-eaa98b161336';
  $pane->panel = 'column2';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_summary_or_trimmed',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '300',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7760ea3e-d1a4-4084-af53-eaa98b161336';
  $display->content['new-7760ea3e-d1a4-4084-af53-eaa98b161336'] = $pane;
  $display->panels['column2'][1] = 'new-7760ea3e-d1a4-4084-af53-eaa98b161336';
  $pane = new stdClass();
  $pane->pid = 'new-6ded405e-b416-4d52-9af6-c7d1fdf0cfd4';
  $pane->panel = 'column2';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'featured',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6ded405e-b416-4d52-9af6-c7d1fdf0cfd4';
  $display->content['new-6ded405e-b416-4d52-9af6-c7d1fdf0cfd4'] = $pane;
  $display->panels['column2'][2] = 'new-6ded405e-b416-4d52-9af6-c7d1fdf0cfd4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:panopoly_faq:default:featured'] = $panelizer;

  return $export;
}
