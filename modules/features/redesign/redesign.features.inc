<?php
/**
 * @file
 * redesign.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function redesign_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function redesign_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function redesign_node_info() {
  $items = array(
    'mission' => array(
      'name' => t('Mission'),
      'base' => 'node_content',
      'description' => t('This is the Mission photo on the front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'solutions' => array(
      'name' => t('Solutions'),
      'base' => 'node_content',
      'description' => t('These are shown on the front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'top_image' => array(
      'name' => t('Top Image'),
      'base' => 'node_content',
      'description' => t('This is the top image for the front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
