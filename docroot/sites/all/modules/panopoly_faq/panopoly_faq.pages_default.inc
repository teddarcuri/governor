<?php
/**
 * @file
 * panopoly_faq.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panopoly_faq_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panopoly_faq';
  $page->task = 'page';
  $page->admin_title = 'FAQ';
  $page->admin_description = 'This is the primary FAQ page that lists all of the FAQ on the site!';
  $page->path = 'faq';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'FAQ',
    'name' => 'main-menu',
    'weight' => '5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panopoly_faq_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'panopoly_faq';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Frequently Asked Questions Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'faq_page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Frequently Asked Questions';
  $display->uuid = '970813e9-a8f4-4d52-80b6-2c6df05dba85';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a12b5925-127d-429f-92f4-b58bca79ba97';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_faq-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
    ),
    'exposed' => array(
      'title' => 'Why are oranges orange?',
      'widget_title' => 'Featured Question',
    ),
    'context' => array(
      0 => '',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'featured',
    'widget_title' => 'Featured Question',
    'items_per_page' => NULL,
    'view_settings' => 'nodes',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a12b5925-127d-429f-92f4-b58bca79ba97';
  $display->content['new-a12b5925-127d-429f-92f4-b58bca79ba97'] = $pane;
  $display->panels['contentmain'][0] = 'new-a12b5925-127d-429f-92f4-b58bca79ba97';
  $pane = new stdClass();
  $pane->pid = 'new-e050fed2-be31-4732-a80b-3f37cbe9f722';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_faq-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
    ),
    'exposed' => array(
      'sort_by' => 'created',
      'sort_order' => 'DESC',
      'widget_title' => 'All Questions and Answers',
      'items_per_page' => '0',
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'All Questions and Answers',
    'items_per_page' => '0',
    'view_settings' => 'fields',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e050fed2-be31-4732-a80b-3f37cbe9f722';
  $display->content['new-e050fed2-be31-4732-a80b-3f37cbe9f722'] = $pane;
  $display->panels['contentmain'][1] = 'new-e050fed2-be31-4732-a80b-3f37cbe9f722';
  $pane = new stdClass();
  $pane->pid = 'new-5682f0b7-8854-4a5a-86e4-b4a1afa2fa60';
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
      'widget_title' => 'Frequently Asked Questions',
      'items_per_page' => '0',
    ),
    'view_mode' => 'teaser',
    'widget_title' => 'Frequently Asked Questions',
    'items_per_page' => '0',
    'view_settings' => 'fields',
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5682f0b7-8854-4a5a-86e4-b4a1afa2fa60';
  $display->content['new-5682f0b7-8854-4a5a-86e4-b4a1afa2fa60'] = $pane;
  $display->panels['sidebar'][0] = 'new-5682f0b7-8854-4a5a-86e4-b4a1afa2fa60';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panopoly_faq'] = $page;

  return $pages;

}
