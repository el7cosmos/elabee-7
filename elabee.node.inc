<?php

function elabee_node_type_page($type) {
  $nids = _elabee_node_type_get_nids($type);

  $nodes = node_load_multiple($nids);
  $build = node_view_multiple($nodes);

  drupal_add_feed($type . '/rss.xml', drupal_get_title() . ' &middot; ' . variable_get('site_name', 'Drupal') . ' ' . t('RSS'));
  $build['pager'] = array(
    '#theme' => 'pager',
    '#weight' => 5,
  );
  return $build;
}

function elabee_node_type_feed($type) {
  $nids = _elabee_node_type_get_nids($type);
  $channel = array(
    'title' => drupal_get_title() . ' &middot; ' . variable_get('site_name', 'Drupal') . ' ' . t('RSS'),
    'link' => url($type, array('absolute' => TRUE)),
    'description' => variable_get('feed_description', ''),
  );
  node_feed($nids, $channel);
}

function _elabee_node_type_get_nids($type) {
  $nids = array();
  $query = new NodeTypeQuery($type);
  $result = $query->execute();

  if (!empty($result)) {
    $nids = array_keys($result['node']);
  }
  return $nids;
}

class NodeTypeQuery extends EntityFieldQuery {

  public function __construct($type) {
    $this
      ->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', $type)
      ->propertyCondition('status', 1)
      ->propertyOrderBy('sticky', 'DESC')
      ->propertyOrderBy('created', 'DESC')
      ->pager(variable_get('default_nodes_main', 10))
      ->addTag('node_access');
  }
}
