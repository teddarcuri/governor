<?php
/**
 * @file
 * panopoly_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function panopoly_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panopoly_news_article:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_news_article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = 'panopoly-news';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'User from Node (on node.node_author)',
      'keyword' => 'user',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => 'panelizer',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'Multiple terms from node',
      'keyword' => 'terms',
      'name' => 'terms_from_node',
      'vocabulary' => array(
        'panopoly_categories' => 'panopoly_categories',
      ),
      'concatenator' => '+',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'News
%node:title',
    'panels_breadcrumbs_paths' => 'news',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5cb61704-05dd-483b-9f5b-7e853940e61e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c8a81995-9871-4c96-9b72-d8cfe52cbfb9';
  $pane->panel = 'contentmain';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
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
  $pane->uuid = 'c8a81995-9871-4c96-9b72-d8cfe52cbfb9';
  $display->content['new-c8a81995-9871-4c96-9b72-d8cfe52cbfb9'] = $pane;
  $display->panels['contentmain'][0] = 'new-c8a81995-9871-4c96-9b72-d8cfe52cbfb9';
  $pane = new stdClass();
  $pane->pid = 'new-0c1462d1-da30-4bdb-ac19-09a259a90688';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_news-articles_by_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '',
    'fields_override' => array(
      'field_featured_image' => 0,
      'title' => 1,
      'body' => 0,
      'created' => 0,
    ),
    'exposed' => array(
      'sort_by' => 'created',
      'sort_order' => 'DESC',
      'widget_title' => 'More By This Author',
      'items_per_page' => '10',
    ),
    'context' => array(
      0 => 'panelizer',
      1 => 'relationship_entity_from_schema:uid-node-user_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => 'More By This Author',
    'items_per_page' => '10',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0c1462d1-da30-4bdb-ac19-09a259a90688';
  $display->content['new-0c1462d1-da30-4bdb-ac19-09a259a90688'] = $pane;
  $display->panels['sidebar'][0] = 'new-0c1462d1-da30-4bdb-ac19-09a259a90688';
  $pane = new stdClass();
  $pane->pid = 'new-797b594e-df13-4562-9ff7-f613cf72b644';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_news-related_news_articles';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'and',
  );
  $pane->configuration = array(
    'use_pager' => NULL,
    'pager_id' => NULL,
    'items_per_page' => '5',
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 0,
      'created' => 1,
    ),
    'exposed' => array(
      'widget_title' => 'Related News Articles',
      'sort_by' => 'created',
      'sort_order' => 'DESC',
    ),
    'context' => array(
      0 => 'panelizer',
      1 => 'relationship_terms_from_node_1',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Related News Articles',
    'view_settings' => 'fields',
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '797b594e-df13-4562-9ff7-f613cf72b644';
  $display->content['new-797b594e-df13-4562-9ff7-f613cf72b644'] = $pane;
  $display->panels['sidebar'][1] = 'new-797b594e-df13-4562-9ff7-f613cf72b644';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:panopoly_news_article:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panopoly_news_article:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_news_article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'News Article Author',
      'keyword' => 'user',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = 'panopoly-news-default';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8fc38e61-d20c-46f9-826e-f4e3269d2ab7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-84d6c966-28b4-4335-9a8d-40ade05079d3';
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
  $pane->uuid = '84d6c966-28b4-4335-9a8d-40ade05079d3';
  $display->content['new-84d6c966-28b4-4335-9a8d-40ade05079d3'] = $pane;
  $display->panels['contentmain'][0] = 'new-84d6c966-28b4-4335-9a8d-40ade05079d3';
  $pane = new stdClass();
  $pane->pid = 'new-ce9276fd-c692-4c66-8b7e-c7fe5f36038e';
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
    'override_title' => 1,
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
  $pane->uuid = 'ce9276fd-c692-4c66-8b7e-c7fe5f36038e';
  $display->content['new-ce9276fd-c692-4c66-8b7e-c7fe5f36038e'] = $pane;
  $display->panels['contentmain'][1] = 'new-ce9276fd-c692-4c66-8b7e-c7fe5f36038e';
  $pane = new stdClass();
  $pane->pid = 'new-1065f9cf-def0-4ca1-92fd-a797a0cb2929';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '5',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1065f9cf-def0-4ca1-92fd-a797a0cb2929';
  $display->content['new-1065f9cf-def0-4ca1-92fd-a797a0cb2929'] = $pane;
  $display->panels['contentmain'][2] = 'new-1065f9cf-def0-4ca1-92fd-a797a0cb2929';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:panopoly_news_article:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panopoly_news_article:default:featured';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_news_article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->css_class = 'panopoly-news-featured';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '719a7576-d6e5-4ede-8e70-fd063b53773a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2c2f1501-ed37-4d84-b9bf-953c50dc16a7';
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
      'image_style' => 'panopoly_image_spotlight',
      'image_link' => 'content',
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
  $pane->uuid = '2c2f1501-ed37-4d84-b9bf-953c50dc16a7';
  $display->content['new-2c2f1501-ed37-4d84-b9bf-953c50dc16a7'] = $pane;
  $display->panels['contentmain'][0] = 'new-2c2f1501-ed37-4d84-b9bf-953c50dc16a7';
  $pane = new stdClass();
  $pane->pid = 'new-3eef8a1e-9e93-487d-a7ea-3196f670721d';
  $pane->panel = 'contentmain';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3eef8a1e-9e93-487d-a7ea-3196f670721d';
  $display->content['new-3eef8a1e-9e93-487d-a7ea-3196f670721d'] = $pane;
  $display->panels['contentmain'][1] = 'new-3eef8a1e-9e93-487d-a7ea-3196f670721d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:panopoly_news_article:default:featured'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panopoly_news_article:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_news_article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = 'panopoly-news-teaser';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c85f9198-75b0-4c7f-b7bd-145b41cec531';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4799c601-edb9-47b4-8434-dc2eac787995';
  $pane->panel = 'center';
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
      'image_style' => 'panopoly_image_quarter',
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
  $pane->uuid = '4799c601-edb9-47b4-8434-dc2eac787995';
  $display->content['new-4799c601-edb9-47b4-8434-dc2eac787995'] = $pane;
  $display->panels['center'][0] = 'new-4799c601-edb9-47b4-8434-dc2eac787995';
  $pane = new stdClass();
  $pane->pid = 'new-a17a64d9-bbae-47f9-b23c-07573206d4cc';
  $pane->panel = 'center';
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
      'trim_length' => 600,
    ),
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
  $pane->uuid = 'a17a64d9-bbae-47f9-b23c-07573206d4cc';
  $display->content['new-a17a64d9-bbae-47f9-b23c-07573206d4cc'] = $pane;
  $display->panels['center'][1] = 'new-a17a64d9-bbae-47f9-b23c-07573206d4cc';
  $pane = new stdClass();
  $pane->pid = 'new-556e15f0-8c78-431a-9f88-63b7edee2103';
  $pane->panel = 'center';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'teaser',
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
  $pane->uuid = '556e15f0-8c78-431a-9f88-63b7edee2103';
  $display->content['new-556e15f0-8c78-431a-9f88-63b7edee2103'] = $pane;
  $display->panels['center'][2] = 'new-556e15f0-8c78-431a-9f88-63b7edee2103';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:panopoly_news_article:default:teaser'] = $panelizer;

  return $export;
}
