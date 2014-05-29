<?php
/**
 * @file
 * new_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function new_features_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Article ',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b4c80d8f-70bf-412f-b147-3d7a1ec8577b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-86a4cb19-78d2-4304-8001-87970983aafb';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '86a4cb19-78d2-4304-8001-87970983aafb';
    $display->content['new-86a4cb19-78d2-4304-8001-87970983aafb'] = $pane;
    $display->panels['left'][0] = 'new-86a4cb19-78d2-4304-8001-87970983aafb';
    $pane = new stdClass();
    $pane->pid = 'new-a4c3f40d-8ff9-47b8-b29e-319bca1e166e';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'colorbox',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
        'colorbox_node_style' => 'medium',
        'colorbox_image_style' => 'medium',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4c3f40d-8ff9-47b8-b29e-319bca1e166e';
    $display->content['new-a4c3f40d-8ff9-47b8-b29e-319bca1e166e'] = $pane;
    $display->panels['middle'][0] = 'new-a4c3f40d-8ff9-47b8-b29e-319bca1e166e';
    $pane = new stdClass();
    $pane->pid = 'new-092e7cc8-e7ea-42f4-86c0-56e2b4d9ba1c';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'article_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '092e7cc8-e7ea-42f4-86c0-56e2b4d9ba1c';
    $display->content['new-092e7cc8-e7ea-42f4-86c0-56e2b4d9ba1c'] = $pane;
    $display->panels['right'][0] = 'new-092e7cc8-e7ea-42f4-86c0-56e2b4d9ba1c';
    $pane = new stdClass();
    $pane->pid = 'new-561bebb5-5261-41ca-b292-5e67b6d39ae6';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'news_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '561bebb5-5261-41ca-b292-5e67b6d39ae6';
    $display->content['new-561bebb5-5261-41ca-b292-5e67b6d39ae6'] = $pane;
    $display->panels['right'][1] = 'new-561bebb5-5261-41ca-b292-5e67b6d39ae6';
    $pane = new stdClass();
    $pane->pid = 'new-04fe5cd6-d6cc-4fe6-b325-e83d36c290cb';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04fe5cd6-d6cc-4fe6-b325-e83d36c290cb';
    $display->content['new-04fe5cd6-d6cc-4fe6-b325-e83d36c290cb'] = $pane;
    $display->panels['top'][0] = 'new-04fe5cd6-d6cc-4fe6-b325-e83d36c290cb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-04fe5cd6-d6cc-4fe6-b325-e83d36c290cb';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'News',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'news' => 'news',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '947b03a4-3ca7-4ca2-9dd2-e2b56595ad7d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-476a8c19-19ad-4987-81dd-3fadf89980e9';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '476a8c19-19ad-4987-81dd-3fadf89980e9';
    $display->content['new-476a8c19-19ad-4987-81dd-3fadf89980e9'] = $pane;
    $display->panels['middle'][0] = 'new-476a8c19-19ad-4987-81dd-3fadf89980e9';
    $pane = new stdClass();
    $pane->pid = 'new-8cef2e04-1c35-4af1-85b5-44cccfcbb43d';
    $pane->panel = 'middle';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8cef2e04-1c35-4af1-85b5-44cccfcbb43d';
    $display->content['new-8cef2e04-1c35-4af1-85b5-44cccfcbb43d'] = $pane;
    $display->panels['middle'][1] = 'new-8cef2e04-1c35-4af1-85b5-44cccfcbb43d';
    $pane = new stdClass();
    $pane->pid = 'new-92d61a26-788f-4db1-9c95-8012b88ac94b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'age_view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '92d61a26-788f-4db1-9c95-8012b88ac94b';
    $display->content['new-92d61a26-788f-4db1-9c95-8012b88ac94b'] = $pane;
    $display->panels['middle'][2] = 'new-92d61a26-788f-4db1-9c95-8012b88ac94b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
