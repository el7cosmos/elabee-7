<?php
/**
 * @file
 * elabee_syntax_highlight.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function elabee_syntax_highlight_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_syntax_highlighting'
  $field_bases['field_syntax_highlighting'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_syntax_highlighting',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
