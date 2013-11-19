<?php

function elabee_facebook_delivery_channel($page_callback_result) {
  $cache_expire = 60 * 60 * 24 * 365;

  drupal_add_http_header('Pragma', 'public');
  drupal_add_http_header('Cache-Control', 'max-age=' . $cache_expire);
  drupal_add_http_header('Expires', format_date(REQUEST_TIME + $cache_expire, 'custom', 'D, d M Y H:i:s', 'GMT') . ' GMT');

  print drupal_render($page_callback_result);
}

function elabee_facebook_channel($lang) {
  return array(
    '#type' => 'html_tag',
    '#tag' => 'script',
    '#attributes' => array(
      'src' => '//connect.facebook.net/' . elabee_facebook_localization($lang) . '/all.js',
    ),
  );
}
