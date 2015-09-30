<?php
/**
 * @file
 * ci_panopoly_config.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ci_panopoly_config_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.fieldable_panels_pane-image-field_basic_image_image.settings|alt_field_required"] = 0;
  $overrides["field_instance.fieldable_panels_pane-image-field_basic_image_image.settings|title_field_required"] = 0;
  $overrides["field_instance.node-panopoly_faq-field_featured_image.settings|alt_field_required"] = 1;
  $overrides["field_instance.node-panopoly_faq-field_featured_image.settings|title_field_required"] = 0;
  $overrides["field_instance.node-panopoly_faq-field_featured_image.widget|settings|manualcrop_crop_info"] = 1;
  $overrides["field_instance.node-panopoly_faq-field_featured_image.widget|settings|manualcrop_default_crop_area"] = 1;
  $overrides["field_instance.node-panopoly_faq-field_featured_image.widget|settings|manualcrop_enable"] = 0;
  $overrides["field_instance.node-panopoly_faq-field_featured_image.widget|settings|manualcrop_inline_crop"] = 0;
  $overrides["field_instance.node-panopoly_faq-field_featured_image.widget|settings|manualcrop_instant_crop"] = 0;
  $overrides["field_instance.node-panopoly_faq-field_featured_image.widget|settings|manualcrop_instant_preview"] = 1;
  $overrides["field_instance.node-panopoly_faq-field_featured_image.widget|settings|manualcrop_keyboard"] = 1;
  $overrides["field_instance.node-panopoly_faq-field_featured_image.widget|settings|manualcrop_maximize_default_crop_area"] = 0;
  $overrides["field_instance.node-panopoly_faq-field_featured_image.widget|settings|manualcrop_thumblist"] = 0;
  $overrides["field_instance.node-panopoly_news_article-field_featured_image.settings|alt_field_required"] = 1;
  $overrides["field_instance.node-panopoly_news_article-field_featured_image.settings|title_field_required"] = 0;
  $overrides["field_instance.node-panopoly_news_article-field_featured_image.widget|settings|manualcrop_crop_info"] = 1;
  $overrides["field_instance.node-panopoly_news_article-field_featured_image.widget|settings|manualcrop_default_crop_area"] = 1;
  $overrides["field_instance.node-panopoly_news_article-field_featured_image.widget|settings|manualcrop_enable"] = 0;
  $overrides["field_instance.node-panopoly_news_article-field_featured_image.widget|settings|manualcrop_inline_crop"] = 0;
  $overrides["field_instance.node-panopoly_news_article-field_featured_image.widget|settings|manualcrop_instant_crop"] = 0;
  $overrides["field_instance.node-panopoly_news_article-field_featured_image.widget|settings|manualcrop_instant_preview"] = 1;
  $overrides["field_instance.node-panopoly_news_article-field_featured_image.widget|settings|manualcrop_keyboard"] = 1;
  $overrides["field_instance.node-panopoly_news_article-field_featured_image.widget|settings|manualcrop_maximize_default_crop_area"] = 0;
  $overrides["field_instance.node-panopoly_news_article-field_featured_image.widget|settings|manualcrop_thumblist"] = 0;
  $overrides["field_instance.node-panopoly_page-field_featured_image.settings|alt_field_required"] = 1;
  $overrides["field_instance.node-panopoly_page-field_featured_image.settings|title_field_required"] = 0;
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.settings|alt_field_required"] = 0;
  $overrides["field_instance.taxonomy_term-panopoly_categories-field_featured_image.settings|title_field_required"] = 0;
  $overrides["field_instance.user-user-field_user_picture.settings|alt_field_required"] = 0;
  $overrides["field_instance.user-user-field_user_picture.settings|title_field_required"] = 0;

  // Exported overrides for: file_display
  $overrides["file_display.image__default__file_field_file_default.status"] = FALSE;
  $overrides["file_display.image__default__file_field_image.settings|image_style"] = 'panopoly_image_original';
  $overrides["file_display.image__preview__file_field_file_default.status"] = FALSE;
  $overrides["file_display.image__preview__file_field_image.settings|image_style"] = 'panopoly_image_thumbnail';
  $overrides["file_display.image__preview__file_field_media_large_icon.status"] = FALSE;
  $overrides["file_display.image__teaser__file_field_file_default.status"] = FALSE;
  $overrides["file_display.image__teaser__file_field_image.settings|image_style"] = 'panopoly_image_quarter';
  $overrides["file_display.video__default__media_vimeo_video.settings|protocol_specify"] = FALSE;
  $overrides["file_display.video__default__media_youtube_video.settings|modestbranding"] = 1;
  $overrides["file_display.video__preview__file_field_file_default.status"] = FALSE;
  $overrides["file_display.video__preview__media_vimeo_image.settings|image_style"] = 'panopoly_image_thumbnail';
  $overrides["file_display.video__preview__media_youtube_image.settings|image_style"] = 'panopoly_image_thumbnail';

  // Exported overrides for: file_type
  $overrides["file_type.audio.disabled"] = FALSE;
  $overrides["file_type.document.disabled"] = FALSE;
  $overrides["file_type.image.disabled"] = FALSE;
  $overrides["file_type.video.disabled"] = FALSE;

  // Exported overrides for: gridbuilder
  $overrides["gridbuilder.ninesixty_12.disabled"] = FALSE;
  $overrides["gridbuilder.ninesixty_16.disabled"] = FALSE;
  $overrides["gridbuilder.six_column_fluid.disabled"] = FALSE;
  $overrides["gridbuilder.six_column_fluid.padding_width"] = 1;
  $overrides["gridbuilder.three_column_fluid.disabled"] = FALSE;
  $overrides["gridbuilder.three_column_fluid.padding_width"] = 1;
  $overrides["gridbuilder.twelve_column_fluid.disabled"] = FALSE;
  $overrides["gridbuilder.twelve_column_fluid.padding_width"] = 1;

  // Exported overrides for: image
  $overrides["image.apps_featured_screenshot.label"] = 'apps_featured_screenshot';
  $overrides["image.apps_logo.label"] = 'apps_logo';
  $overrides["image.apps_logo_small.label"] = 'apps_logo_small';
  $overrides["image.apps_screenshot.label"] = 'apps_screenshot';
  $overrides["image.linkit_thumb.label"] = 'linkit_thumb';

  // Exported overrides for: layout_breakpoint
  $overrides["layout_breakpoint.smatphone.smatphone"]["DELETED"] = TRUE;
  $overrides["layout_breakpoint.standard.disabled"] = FALSE;
  $overrides["layout_breakpoint.tablet.disabled"] = FALSE;

  // Exported overrides for: layout_region
  $overrides["layout_region.body.disabled"] = FALSE;
  $overrides["layout_region.footer_a.disabled"] = FALSE;
  $overrides["layout_region.footer_b.disabled"] = FALSE;
  $overrides["layout_region.footer_c.disabled"] = FALSE;
  $overrides["layout_region.header_a.disabled"] = FALSE;
  $overrides["layout_region.header_b.disabled"] = FALSE;
  $overrides["layout_region.header_c.disabled"] = FALSE;
  $overrides["layout_region.navigation.disabled"] = FALSE;
  $overrides["layout_region.sidebar_a.disabled"] = FALSE;
  $overrides["layout_region.sidebar_b.disabled"] = FALSE;
  $overrides["layout_region.sidebar_c.disabled"] = FALSE;
  $overrides["layout_region.subheader_a.disabled"] = FALSE;
  $overrides["layout_region.subheader_b.disabled"] = FALSE;
  $overrides["layout_region.subheader_c.disabled"] = FALSE;
  $overrides["layout_region.title.disabled"] = FALSE;

  // Exported overrides for: node
  $overrides["node.panel.body_label"]["DELETED"] = TRUE;
  $overrides["node.panel.has_title"] = 1;
  $overrides["node.panel.help"] = '';
  $overrides["node.panel.title_label"] = 'Title';

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__panopoly_page.value|extra_fields|form|path|weight"] = 6;

  // Exported overrides for: views_view
  $overrides["views_view.admin_views_file.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::panelizer_set_status_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_file.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_send_email_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_file.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_argument_selector_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_file.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_script_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_save_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_unpublish_by_keyword_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_goto_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_message_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_send_email_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_argument_selector_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_script_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_block_ip_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_goto_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_message_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::user_block_user_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_argument_selector_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_delete_item"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_script_action"]["DELETED"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|block|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|access|perm"]["DELETED"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|exception|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|specify_validation"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|arguments|created_year_month|title_enable"] = TRUE;
  $overrides["views_view.archive.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|block|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|access|perm"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|specify_validation"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|arguments|nid|title_enable"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|empty|text|empty"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.backlinks.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.bean_blocks_overview.display|default|display_options|exposed_form|options|autosubmit"]["DELETED"] = TRUE;
  $overrides["views_view.bean_blocks_overview.display|default|display_options|exposed_form|options|autosubmit_hide"]["DELETED"] = TRUE;
  $overrides["views_view.bean_blocks_overview.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.frontpage.display|default|display_options|access|perm"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|exception|title_enable"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|summary_options|inline"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|attachment|display_options|inherit_arguments"] = FALSE;
  $overrides["views_view.glossary.display|default|display_options|access|perm"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|exception|title_enable"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|glossary"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|specify_validation"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|arguments|title|transform_dash"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|name|link_to_user"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|override"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|style_options|sticky"]["DELETED"] = TRUE;
  $overrides["views_view.glossary.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.media_default.display|default|display_options|exposed_form|options"]["DELETED"] = TRUE;
  $overrides["views_view.media_default.display|default|display_options|fields|filename|link_to_file"]["DELETED"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|access|perm"]["DELETED"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth_modifier|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|break_phrase"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|exception|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|specify_validation"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|arguments|term_node_tid_depth|title_enable"] = TRUE;
  $overrides["views_view.taxonomy_term.display|default|display_options|use_more_always"] = FALSE;

 return $overrides;
}
