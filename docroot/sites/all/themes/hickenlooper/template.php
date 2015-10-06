<?php

/**
 * Implements template_preprocess_html().
 */
function hickenlooper_preprocess_html(&$variables) {
}

/**
 * Implements template_preprocess_page.
 */
function hickenlooper_preprocess_page(&$variables) {
}

/**
 * Implements template_preprocess_node.
 */
function hickenlooper_preprocess_node(&$variables) {
}

// Javascripts

// Jquery
drupal_add_js(drupal_get_path('theme', 'hickenlooper') .'/bower_components/jQuery/dist/jquery.js', array('scope' => 'footer'));

// react
drupal_add_js(drupal_get_path('theme', 'hickenlooper') .'/bower_components/react/react.js', array('scope' => 'footer'));

// Libraries
drupal_add_js(drupal_get_path('theme', 'hickenlooper') .'/bower_components/velocity/velocity.min.js', array('scope' => 'footer'));
drupal_add_js(drupal_get_path('theme', 'hickenlooper') .'/bower_components/velocity/velocity.ui.min.js', array('scope' => 'footer'));
drupal_add_js(drupal_get_path('theme', 'hickenlooper') .'/bower_components/slick-carousel/slick/slick.min.js', array('scope' => 'footer'));
drupal_add_js(drupal_get_path('theme', 'hickenlooper') .'/bower_components/jquery-gi-thewall/jQuery.GI.TheWall.js', array('scope' => 'footer'));
drupal_add_js(drupal_get_path('theme', 'hickenlooper') .'/js/scripts.js', array('scope' => 'footer'));
