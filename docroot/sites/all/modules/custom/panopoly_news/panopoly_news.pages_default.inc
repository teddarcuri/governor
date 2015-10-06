<?php
/**
 * @file
 * panopoly_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panopoly_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panopoly_news_articles_author';
  $page->task = 'page';
  $page->admin_title = 'Articles By Author';
  $page->admin_description = 'Page presents basic information about the author and the articles they have written.';
  $page->path = 'news/%name';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'User: name',
      'name' => 'user_name',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panopoly_news_articles_author_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'panopoly_news_articles_author';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from User (on node.node_author)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-user-node',
        'context' => 'argument_user_name_1',
        'id' => 1,
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'moscone_flipped';
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
  $display->title = '';
  $display->uuid = '41dada0e-a33f-4df0-82a3-85a953785bbe';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-66c72108-b89c-4c77-a3cf-6c2150e49409';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_news_author-main_content_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => NULL,
    'widget_title' => '',
    'items_per_page' => '5',
    'context' => array(
      0 => 'argument_user_name_1',
    ),
    'use_pager' => 0,
    'pager_id' => '',
    'fields_override' => array(
      'title' => 1,
      'field_panopoly_news_image' => 1,
      'created' => 1,
      'body' => 1,
      'view_node' => 1,
    ),
    'exposed' => array(
      'sort_by' => 'created',
      'sort_order' => 'DESC',
      'widget_title' => '',
      'items_per_page' => '5',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '66c72108-b89c-4c77-a3cf-6c2150e49409';
  $display->content['new-66c72108-b89c-4c77-a3cf-6c2150e49409'] = $pane;
  $display->panels['contentmain'][0] = 'new-66c72108-b89c-4c77-a3cf-6c2150e49409';
  $pane = new stdClass();
  $pane->pid = 'new-d2e27e54-5d08-42a0-92f7-1d04e80ce378';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_news_featured_articles-main_content_grid';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '',
    'items_per_page' => '10',
    'fields_override' => array(
      'created' => 0,
      'field_panopoly_news_image' => 1,
      'title' => 1,
      'name' => 1,
      'body' => 0,
      'field_panopoly_news_tags' => 0,
    ),
    'view_mode' => NULL,
    'widget_title' => 'Recent Featured Articles',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd2e27e54-5d08-42a0-92f7-1d04e80ce378';
  $display->content['new-d2e27e54-5d08-42a0-92f7-1d04e80ce378'] = $pane;
  $display->panels['footer'][0] = 'new-d2e27e54-5d08-42a0-92f7-1d04e80ce378';
  $pane = new stdClass();
  $pane->pid = 'new-0c72ac75-13d1-4e46-9d9d-aad3b9f0a9bd';
  $pane->panel = 'sidebar';
  $pane->type = 'user_picture';
  $pane->subtype = 'user_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_user_name_1',
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
  $pane->uuid = '0c72ac75-13d1-4e46-9d9d-aad3b9f0a9bd';
  $display->content['new-0c72ac75-13d1-4e46-9d9d-aad3b9f0a9bd'] = $pane;
  $display->panels['sidebar'][0] = 'new-0c72ac75-13d1-4e46-9d9d-aad3b9f0a9bd';
  $pane = new stdClass();
  $pane->pid = 'new-1176517a-8207-40ae-841c-4c7247c851bf';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_news_article_archive-side_list_compressed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => NULL,
    'widget_title' => '',
    'items_per_page' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1176517a-8207-40ae-841c-4c7247c851bf';
  $display->content['new-1176517a-8207-40ae-841c-4c7247c851bf'] = $pane;
  $display->panels['sidebar'][1] = 'new-1176517a-8207-40ae-841c-4c7247c851bf';
  $pane = new stdClass();
  $pane->pid = 'new-5ff51557-90e8-4984-9895-47f71222ee43';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_news_article_by_topic-side_list_compressed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '',
    'items_per_page' => '0',
    'view_mode' => 'teaser',
    'widget_title' => 'Most Popular Topics',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5ff51557-90e8-4984-9895-47f71222ee43';
  $display->content['new-5ff51557-90e8-4984-9895-47f71222ee43'] = $pane;
  $display->panels['sidebar'][2] = 'new-5ff51557-90e8-4984-9895-47f71222ee43';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panopoly_news_articles_author'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panopoly_news_home_page';
  $page->task = 'page';
  $page->admin_title = 'News Home Page';
  $page->admin_description = 'The primary disambiguation page for all things news-related. Think of as the primary page of a blog or news section of your site.';
  $page->path = 'news';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
    'name' => 'main-menu',
    'weight' => '0',
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
  $handler->name = 'page_panopoly_news_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'panopoly_news_home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'selby_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
      'contentfooter' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '26c7417a-0998-4b56-81aa-b7239c4ac0ae';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0600930c-09d4-40be-88c5-ef099436f583';
  $pane->panel = 'contentcolumn1';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_news-single_news_article';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
      'created' => 1,
    ),
    'exposed' => array(
      'title_1' => '',
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'view_mode' => 'featured',
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'nodes',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0600930c-09d4-40be-88c5-ef099436f583';
  $display->content['new-0600930c-09d4-40be-88c5-ef099436f583'] = $pane;
  $display->panels['contentcolumn1'][0] = 'new-0600930c-09d4-40be-88c5-ef099436f583';
  $pane = new stdClass();
  $pane->pid = 'new-801b225a-ac41-4059-8823-714b3f7aaa14';
  $pane->panel = 'contentcolumn2';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_news-single_news_article';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'edit_node' => 1,
      'delete_node' => 1,
      'contextual_links' => 1,
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
      'created' => 1,
    ),
    'exposed' => array(
      'title_1' => '',
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'view_mode' => 'featured',
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'nodes',
    'header_type' => 'none',
    'context' => array(
      0 => 'empty',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '801b225a-ac41-4059-8823-714b3f7aaa14';
  $display->content['new-801b225a-ac41-4059-8823-714b3f7aaa14'] = $pane;
  $display->panels['contentcolumn2'][0] = 'new-801b225a-ac41-4059-8823-714b3f7aaa14';
  $pane = new stdClass();
  $pane->pid = 'new-dc6e5c49-d155-4628-bee9-6b1f277b25a9';
  $pane->panel = 'contentfooter';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_news-list_news_articles';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'body' => 1,
      'created' => 1,
    ),
    'exposed' => array(
      'Is Featured' => 'All',
      'widget_title' => '',
      'use_pager' => 1,
      'pager_id' => '',
      'sort_by' => 'created',
      'sort_order' => 'DESC',
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => '',
    'items_per_page' => '3',
    'view_settings' => 'nodes',
    'use_pager' => NULL,
    'pager_id' => NULL,
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dc6e5c49-d155-4628-bee9-6b1f277b25a9';
  $display->content['new-dc6e5c49-d155-4628-bee9-6b1f277b25a9'] = $pane;
  $display->panels['contentfooter'][0] = 'new-dc6e5c49-d155-4628-bee9-6b1f277b25a9';
  $pane = new stdClass();
  $pane->pid = 'new-36582f36-ae37-47ae-8b54-2e7ffb55295e';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_news-article_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => NULL,
    'pager_id' => NULL,
    'fields_override' => array(
      'field_featured_image' => 0,
      'title' => 1,
      'body' => 0,
      'created' => 0,
    ),
    'exposed' => array(
      'widget_title' => 'Archive',
      'use_pager' => 0,
      'pager_id' => '',
      'sort_by' => 'created',
      'sort_order' => 'DESC',
    ),
    'context' => array(
      0 => 'empty',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Archive',
    'items_per_page' => '10',
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '36582f36-ae37-47ae-8b54-2e7ffb55295e';
  $display->content['new-36582f36-ae37-47ae-8b54-2e7ffb55295e'] = $pane;
  $display->panels['sidebar'][0] = 'new-36582f36-ae37-47ae-8b54-2e7ffb55295e';
  $pane = new stdClass();
  $pane->pid = 'new-13126cce-7580-45c8-bf3d-7d4d35d855b8';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_news-popular_news_topics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => NULL,
    'pager_id' => NULL,
    'exposed' => array(
      'widget_title' => 'Topics',
      'use_pager' => 0,
      'pager_id' => '',
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Topics',
    'items_per_page' => '10',
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '13126cce-7580-45c8-bf3d-7d4d35d855b8';
  $display->content['new-13126cce-7580-45c8-bf3d-7d4d35d855b8'] = $pane;
  $display->panels['sidebar'][1] = 'new-13126cce-7580-45c8-bf3d-7d4d35d855b8';
  $pane = new stdClass();
  $pane->pid = 'new-308f8806-5093-4e3c-bf23-55233ae0dc8e';
  $pane->panel = 'sidebar';
  $pane->type = 'panopoly_news_rss';
  $pane->subtype = 'panopoly_news_rss';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '308f8806-5093-4e3c-bf23-55233ae0dc8e';
  $display->content['new-308f8806-5093-4e3c-bf23-55233ae0dc8e'] = $pane;
  $display->panels['sidebar'][2] = 'new-308f8806-5093-4e3c-bf23-55233ae0dc8e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panopoly_news_home_page'] = $page;

  return $pages;

}
