<?php
/**
 * @file
 * humanitarianresponse_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function humanitarianresponse_events_taxonomy_default_vocabularies() {
  return array(
    'event_categories' => array(
      'name' => 'Event categories',
      'machine_name' => 'event_categories',
      'description' => 'Organize events in categories',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
