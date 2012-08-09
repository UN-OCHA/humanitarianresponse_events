<?php
/**
 * @file
 * humanitarianresponse_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_events_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'taxonomy/term/!1/calendar';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no events';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'media-center/events';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'media-center/events/feed';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Calendar */
  $handler = $view->new_display('page', 'Calendar', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'document' => '#ffffff',
    'event' => '#ffffff',
    'link' => '#ffffff',
    'map' => '#ffffff',
    'news' => '#ffffff',
    'page' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_event_category';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    0 => 13,
    1 => 13,
    2 => 13,
    3 => 13,
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    17 => '#1862F3',
    14 => '#ffffff',
    15 => '#FF000D',
    16 => '#F8FF00',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_event_category']['id'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['fields']['field_event_category']['field'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_category']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_category']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_category']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 1;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['path'] = 'coordination/calendar';

  /* Display: iCal */
  $handler = $view->new_display('feed', 'iCal', 'calendar_ical');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_event_date.field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'coordination/calendar/ical/calendar.ics';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'page_2' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Calendar per term */
  $handler = $view->new_display('page', 'Calendar per term', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'document' => '#ffffff',
    'event' => '#ffffff',
    'link' => '#ffffff',
    'map' => '#ffffff',
    'news' => '#ffffff',
    'page' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_event_category';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    0 => 13,
    1 => 13,
    2 => 13,
    3 => 13,
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    17 => '#1862F3',
    14 => '#ffffff',
    15 => '#FF000D',
    16 => '#F8FF00',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_event_category']['id'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['fields']['field_event_category']['field'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_category']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_category']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_category']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
    'coordination_hubs' => 'coordination_hubs',
    'emergencies' => 'emergencies',
    'funding' => 'funding',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['breadcrumb_enable'] = 1;
  $handler->display->display_options['arguments']['date_argument']['breadcrumb'] = '<none>';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['path'] = 'taxonomy/term/%/calendar';

  /* Display: Block per term */
  $handler = $view->new_display('block', 'Block per term', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'assessment' => '#ffffff',
    'contact' => '#ffffff',
    'document' => '#ffffff',
    'event' => '#ffffff',
    'media_gallery' => '#ffffff',
    'highlight' => '#ffffff',
    'humanitarian_profile' => '#ffffff',
    'indicator_registry' => '#ffffff',
    'link' => '#ffffff',
    'map' => '#ffffff',
    'news' => '#ffffff',
    'page' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_event_category';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    0 => 14,
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    20 => '#1862F3',
    17 => '#ffffff',
    18 => '#FF000D',
    19 => '#F8FF00',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_event_category']['id'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['fields']['field_event_category']['field'] = 'field_event_category';
  $handler->display->display_options['fields']['field_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_category']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_category']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_category']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
    'coordination_hubs' => 'coordination_hubs',
    'emergencies' => 'emergencies',
    'funding' => 'funding',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['block_description'] = 'Calendar per term';
  $translatables['events'] = array(
    t('Master'),
    t('Events'),
    t('View all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Page'),
    t('more'),
    t('There are no events'),
    t('Cluster'),
    t('Feed'),
    t('Calendar'),
    t('All'),
    t('iCal'),
    t('Calendar per term'),
    t('<none>'),
    t('Block per term'),
  );
  $export['events'] = $view;

  $view = new view;
  $view->name = 'meeting_minutes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meeting Minutes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meeting Minutes';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no meeting minutes';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Minutes */
  $handler->display->display_options['fields']['field_event_minutes']['id'] = 'field_event_minutes';
  $handler->display->display_options['fields']['field_event_minutes']['table'] = 'field_data_field_event_minutes';
  $handler->display->display_options['fields']['field_event_minutes']['field'] = 'field_event_minutes';
  $handler->display->display_options['fields']['field_event_minutes']['label'] = '';
  $handler->display->display_options['fields']['field_event_minutes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_minutes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_minutes']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_minutes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_minutes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_minutes']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_minutes']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_minutes']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Meeting Minutes Per Term */
  $handler = $view->new_display('page', 'Meeting Minutes Per Term', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
    'coordination_hubs' => 'coordination_hubs',
    'emergencies' => 'emergencies',
    'funding' => 'funding',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['path'] = 'taxonomy/term/%/meeting-minutes';

  /* Display: Block per term */
  $handler = $view->new_display('block', 'Block per term', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
    'coordination_hubs' => 'coordination_hubs',
    'emergencies' => 'emergencies',
    'funding' => 'funding',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['block_description'] = 'Meeting Minutes per term';
  $translatables['meeting_minutes'] = array(
    t('Master'),
    t('Meeting Minutes'),
    t('View all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('There are no meeting minutes'),
    t('Meeting Minutes Per Term'),
    t('more'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('All'),
    t('Block per term'),
    t('Meeting Minutes per term'),
  );
  $export['meeting_minutes'] = $view;

  return $export;
}
