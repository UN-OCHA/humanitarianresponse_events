<?php
/**
 * @file
 * humanitarianresponse_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function humanitarianresponse_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'print_calendar';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'calendar' => 'calendar',
        'calendar/*' => 'calendar/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'print-print-links' => array(
          'module' => 'print',
          'delta' => 'print-links',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['print_calendar'] = $context;

  return $export;
}
