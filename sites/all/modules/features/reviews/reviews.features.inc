<?php
/**
 * @file
 * reviews.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reviews_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function reviews_node_info() {
  $items = array(
    'review' => array(
      'name' => t('Review'),
      'base' => 'node_content',
      'description' => t('Band review'),
      'has_title' => '1',
      'title_label' => t('Band Review'),
      'help' => t('Tell us about metal that rules!  Or metal that sucks.  Whatever.  Dooooom!'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
