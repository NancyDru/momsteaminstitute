<?php
/**
 * @file
 * redesign.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function redesign_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overlay|node|mission|default';
  $field_group->group_name = 'group_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mission';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Overlay',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-overlay field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_overlay|node|mission|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overlay|node|top_image|default';
  $field_group->group_name = 'group_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'top_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_read_more_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-overlay field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_overlay|node|top_image|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Overlay');

  return $field_groups;
}
