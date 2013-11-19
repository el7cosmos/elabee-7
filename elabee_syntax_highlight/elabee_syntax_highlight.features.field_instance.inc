<?php
/**
 * @file
 * elabee_syntax_highlight.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function elabee_syntax_highlight_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-field_syntax_highlighting'
  $field_instances['node-article-field_syntax_highlighting'] = array(
    'bundle' => 'article',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_syntax_highlighting',
    'label' => 'Syntax Highlighting',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Syntax Highlighting');

  return $field_instances;
}
