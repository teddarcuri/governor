<?php
/**
 * @file
 * ci_panopoly_config.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function ci_panopoly_config_field_default_field_instances_alter(&$data) {
  if (isset($data['fieldable_panels_pane-image-field_basic_image_image'])) {
    $data['fieldable_panels_pane-image-field_basic_image_image']['settings']['alt_field_required'] = 0; /* WAS: '' */
    $data['fieldable_panels_pane-image-field_basic_image_image']['settings']['title_field_required'] = 0; /* WAS: '' */
  }
  if (isset($data['node-panopoly_faq-field_featured_image'])) {
    $data['node-panopoly_faq-field_featured_image']['settings']['alt_field_required'] = 1; /* WAS: '' */
    $data['node-panopoly_faq-field_featured_image']['settings']['title_field_required'] = 0; /* WAS: '' */
    $data['node-panopoly_faq-field_featured_image']['widget']['settings']['manualcrop_crop_info'] = 1; /* WAS: TRUE */
    $data['node-panopoly_faq-field_featured_image']['widget']['settings']['manualcrop_default_crop_area'] = 1; /* WAS: TRUE */
    $data['node-panopoly_faq-field_featured_image']['widget']['settings']['manualcrop_enable'] = 0; /* WAS: FALSE */
    $data['node-panopoly_faq-field_featured_image']['widget']['settings']['manualcrop_inline_crop'] = 0; /* WAS: FALSE */
    $data['node-panopoly_faq-field_featured_image']['widget']['settings']['manualcrop_instant_crop'] = 0; /* WAS: FALSE */
    $data['node-panopoly_faq-field_featured_image']['widget']['settings']['manualcrop_instant_preview'] = 1; /* WAS: TRUE */
    $data['node-panopoly_faq-field_featured_image']['widget']['settings']['manualcrop_keyboard'] = 1; /* WAS: TRUE */
    $data['node-panopoly_faq-field_featured_image']['widget']['settings']['manualcrop_maximize_default_crop_area'] = 0; /* WAS: FALSE */
    $data['node-panopoly_faq-field_featured_image']['widget']['settings']['manualcrop_thumblist'] = 0; /* WAS: FALSE */
  }
  if (isset($data['node-panopoly_news_article-field_featured_image'])) {
    $data['node-panopoly_news_article-field_featured_image']['settings']['alt_field_required'] = 1; /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['settings']['title_field_required'] = 0; /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_crop_info'] = 1; /* WAS: TRUE */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_default_crop_area'] = 1; /* WAS: TRUE */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_enable'] = 0; /* WAS: FALSE */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_inline_crop'] = 0; /* WAS: FALSE */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_instant_crop'] = 0; /* WAS: FALSE */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_instant_preview'] = 1; /* WAS: TRUE */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_keyboard'] = 1; /* WAS: TRUE */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_maximize_default_crop_area'] = 0; /* WAS: FALSE */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_thumblist'] = 0; /* WAS: FALSE */
  }
  if (isset($data['node-panopoly_page-body'])) {
    $data['node-panopoly_page-body']['widget']['weight'] = 5; /* WAS: 4 */
  }
  if (isset($data['node-panopoly_page-field_featured_image'])) {
    $data['node-panopoly_page-field_featured_image']['settings']['alt_field_required'] = 1; /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['settings']['title_field_required'] = 0; /* WAS: '' */
  }
  if (isset($data['node-panopoly_page-field_featured_status'])) {
    $data['node-panopoly_page-field_featured_status']['widget']['weight'] = 4; /* WAS: 3 */
  }
  if (isset($data['taxonomy_term-panopoly_categories-field_featured_image'])) {
    $data['taxonomy_term-panopoly_categories-field_featured_image']['settings']['alt_field_required'] = 0; /* WAS: '' */
    $data['taxonomy_term-panopoly_categories-field_featured_image']['settings']['title_field_required'] = 0; /* WAS: '' */
  }
  if (isset($data['user-user-field_user_picture'])) {
    $data['user-user-field_user_picture']['settings']['alt_field_required'] = 0; /* WAS: '' */
    $data['user-user-field_user_picture']['settings']['title_field_required'] = 0; /* WAS: '' */
  }
}

/**
 * Implements hook_file_default_displays_alter().
 */
function ci_panopoly_config_file_default_displays_alter(&$data) {
  if (isset($data['image__default__file_field_file_default'])) {
    $data['image__default__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__default__file_field_image'])) {
    $data['image__default__file_field_image']->settings['image_style'] = 'panopoly_image_original'; /* WAS: '' */
  }
  if (isset($data['image__preview__file_field_file_default'])) {
    $data['image__preview__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__preview__file_field_image'])) {
    $data['image__preview__file_field_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'thumbnail' */
  }
  if (isset($data['image__preview__file_field_media_large_icon'])) {
    $data['image__preview__file_field_media_large_icon']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__teaser__file_field_file_default'])) {
    $data['image__teaser__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__teaser__file_field_image'])) {
    $data['image__teaser__file_field_image']->settings['image_style'] = 'panopoly_image_quarter'; /* WAS: 'medium' */
  }
  if (isset($data['video__default__media_vimeo_video'])) {
    $data['video__default__media_vimeo_video']->settings['protocol_specify'] = FALSE; /* WAS: 0 */
  }
  if (isset($data['video__default__media_youtube_video'])) {
    $data['video__default__media_youtube_video']->settings['modestbranding'] = 1; /* WAS: 0 */
  }
  if (isset($data['video__preview__file_field_file_default'])) {
    $data['video__preview__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['video__preview__media_vimeo_image'])) {
    $data['video__preview__media_vimeo_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'media_thumbnail' */
  }
  if (isset($data['video__preview__media_youtube_image'])) {
    $data['video__preview__media_youtube_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'media_thumbnail' */
  }
}

/**
 * Implements hook_file_default_types_alter().
 */
function ci_panopoly_config_file_default_types_alter(&$data) {
  if (isset($data['audio'])) {
    $data['audio']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['document'])) {
    $data['document']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['image'])) {
    $data['image']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['video'])) {
    $data['video']->disabled = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_default_gridbuilder_grids_alter().
 */
function ci_panopoly_config_default_gridbuilder_grids_alter(&$data) {
  if (isset($data['ninesixty_12'])) {
    $data['ninesixty_12']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['ninesixty_16'])) {
    $data['ninesixty_16']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['six_column_fluid'])) {
    $data['six_column_fluid']->disabled = FALSE; /* WAS: '' */
    $data['six_column_fluid']->padding_width = 1; /* WAS: 1.5 */
  }
  if (isset($data['three_column_fluid'])) {
    $data['three_column_fluid']->disabled = FALSE; /* WAS: '' */
    $data['three_column_fluid']->padding_width = 1; /* WAS: 1.5 */
  }
  if (isset($data['twelve_column_fluid'])) {
    $data['twelve_column_fluid']->disabled = FALSE; /* WAS: '' */
    $data['twelve_column_fluid']->padding_width = 1; /* WAS: 1.5 */
  }
}

/**
 * Implements hook_image_styles_alter().
 */
function ci_panopoly_config_image_styles_alter(&$data) {
  if (isset($data['apps_featured_screenshot'])) {

  if (!isset($data['apps_featured_screenshot']['storage']) || $data['apps_featured_screenshot']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['apps_featured_screenshot']['label'] = 'apps_featured_screenshot';
  }
  }
  if (isset($data['apps_logo'])) {

  if (!isset($data['apps_logo']['storage']) || $data['apps_logo']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['apps_logo']['label'] = 'apps_logo';
  }
  }
  if (isset($data['apps_logo_small'])) {

  if (!isset($data['apps_logo_small']['storage']) || $data['apps_logo_small']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['apps_logo_small']['label'] = 'apps_logo_small';
  }
  }
  if (isset($data['apps_screenshot'])) {

  if (!isset($data['apps_screenshot']['storage']) || $data['apps_screenshot']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['apps_screenshot']['label'] = 'apps_screenshot';
  }
  }
  if (isset($data['beanslide-960'])) {

  if (!isset($data['beanslide-960']['storage']) || $data['beanslide-960']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['beanslide-960']['label'] = 'beanslide-960';
  }
  }
  if (isset($data['linkit_thumb'])) {

  if (!isset($data['linkit_thumb']['storage']) || $data['linkit_thumb']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['linkit_thumb']['label'] = 'linkit_thumb';
  }
  }
}

/**
 * Implements hook_default_layout_breakpoint_alter().
 */
function ci_panopoly_config_default_layout_breakpoint_alter(&$data) {
  if (isset($data['smatphone'])) {
    unset($data['smatphone']);
  }
  if (isset($data['standard'])) {
    $data['standard']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['tablet'])) {
    $data['tablet']->disabled = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_default_layout_region_alter().
 */
function ci_panopoly_config_default_layout_region_alter(&$data) {
  if (isset($data['body'])) {
    $data['body']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['footer_a'])) {
    $data['footer_a']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['footer_b'])) {
    $data['footer_b']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['footer_c'])) {
    $data['footer_c']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['header_a'])) {
    $data['header_a']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['header_b'])) {
    $data['header_b']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['header_c'])) {
    $data['header_c']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['navigation'])) {
    $data['navigation']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['sidebar_a'])) {
    $data['sidebar_a']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['sidebar_b'])) {
    $data['sidebar_b']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['sidebar_c'])) {
    $data['sidebar_c']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['subheader_a'])) {
    $data['subheader_a']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['subheader_b'])) {
    $data['subheader_b']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['subheader_c'])) {
    $data['subheader_c']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['title'])) {
    $data['title']->disabled = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_node_info_alter().
 */
function ci_panopoly_config_node_info_alter(&$data) {
  if (isset($data['panel'])) {
    $data['panel']['has_title'] = 1; /* WAS: '' */
    $data['panel']['help'] = ''; /* WAS: '' */
    $data['panel']['title_label'] = 'Title'; /* WAS: '' */
    unset($data['panel']['body_label']);
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function ci_panopoly_config_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_edit_panel_context'])) {
    $data['node_edit_panel_context']->conf['display']->content['new-2967a3b9-2ff8-419b-8a5e-bbb839060d70'] = (object) array(
          'pid' => 'new-2967a3b9-2ff8-419b-8a5e-bbb839060d70',
          'panel' => 'sidebar',
          'type' => 'entity_form_field',
          'subtype' => 'node:field_goals',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => '',
            'formatter' => '',
            'context' => 'argument_node_edit_1',
            'override_title' => 0,
            'override_title_text' => '',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '2967a3b9-2ff8-419b-8a5e-bbb839060d70',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-6e4a98d8-3738-41b9-8c33-4b4c905c6834']->position = 6; /* WAS: 5 */
    $data['node_edit_panel_context']->conf['display']->content['new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d']->position = 5; /* WAS: 4 */
    $data['node_edit_panel_context']->conf['display']->content['new-99f6c0bd-36fd-411b-9833-c0be0fab7548']->position = 3; /* WAS: 2 */
    $data['node_edit_panel_context']->conf['display']->content['new-c0926cca-059c-4bb1-bccd-2838ec7a93f2']->position = 7; /* WAS: 6 */
    $data['node_edit_panel_context']->conf['display']->content['new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c']->position = 4; /* WAS: 3 */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar'][7] = 'new-2967a3b9-2ff8-419b-8a5e-bbb839060d70'; /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function ci_panopoly_config_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__panopoly_page'])) {
    $data['field_bundle_settings_node__panopoly_page']->value['extra_fields']['form']['path']['weight'] = 6; /* WAS: 5 */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function ci_panopoly_config_views_default_views_alter(&$data) {
  if (isset($data['admin_views_file'])) {
    unset($data['admin_views_file']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::panelizer_set_status_action']);
    unset($data['admin_views_file']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_send_email_action']);
    unset($data['admin_views_file']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_argument_selector_action']);
    unset($data['admin_views_file']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_script_action']);
  }
  if (isset($data['admin_views_node'])) {
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_save_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_unpublish_by_keyword_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_goto_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_message_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_send_email_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_argument_selector_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_script_action']);
  }
  if (isset($data['admin_views_user'])) {
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_block_ip_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_goto_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_message_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::user_block_user_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_argument_selector_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_delete_item']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_script_action']);
  }
  if (isset($data['archive'])) {
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['archive']->display['default']->display_options['access']['perm']);
  }
  if (isset($data['backlinks'])) {
    $data['backlinks']->display['block']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['block']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['arguments']['nid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['backlinks']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['backlinks']->display['default']->display_options['access']['perm']);
    unset($data['backlinks']->display['default']->display_options['empty']['text']['empty']);
    unset($data['backlinks']->display['default']->display_options['fields']['title']['link_to_node']);
  }
  if (isset($data['bean_blocks_overview'])) {
    $data['bean_blocks_overview']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['bean_blocks_overview']->display['default']->display_options['exposed_form']['options']['autosubmit']);
    unset($data['bean_blocks_overview']->display['default']->display_options['exposed_form']['options']['autosubmit_hide']);
  }
  if (isset($data['frontpage'])) {
    $data['frontpage']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['frontpage']->display['default']->display_options['access']['perm']);
    unset($data['frontpage']->display['default']->display_options['row_options']);
  }
  if (isset($data['glossary'])) {
    $data['glossary']->display['attachment']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['summary_options']['inline'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['inherit_arguments'] = FALSE; /* WAS: 0 */
    $data['glossary']->display['default']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['glossary']->display['attachment']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['access']['perm']);
    unset($data['glossary']->display['default']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['glossary']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['glossary']->display['default']->display_options['style_options']['override']);
    unset($data['glossary']->display['default']->display_options['style_options']['sticky']);
  }
  if (isset($data['media_default'])) {
    unset($data['media_default']->display['default']->display_options['exposed_form']['options']);
    unset($data['media_default']->display['default']->display_options['fields']['filename']['link_to_file']);
  }
  if (isset($data['taxonomy_term'])) {
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['taxonomy_term']->display['default']->display_options['access']['perm']);
  }
}
