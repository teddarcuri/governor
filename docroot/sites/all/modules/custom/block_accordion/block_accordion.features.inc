<?php
/**
 * @file
 * block_accordion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function block_accordion_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
