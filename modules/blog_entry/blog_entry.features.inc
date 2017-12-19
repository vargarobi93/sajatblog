<?php
/**
 * @file
 * blog_entry.features.inc
 */

/**
 * Implements hook_node_info().
 */
function blog_entry_node_info() {
  $items = array(
    'blog_entry' => array(
      'name' => t('Blog Entry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
