<?php

/**
 * @file
 * Contains customer.page.inc.
 *
 * Page callback for Customer entities.
 */

use Drupal\Core\Render\Element;

/**
 * Prepares variables for Customer templates.
 *
 * Default template: customer.html.twig.
 *
 * @param array $variables
 *   An associative array containing:
 *   - elements: An associative array containing the user information and any
 *   - attributes: HTML attributes for the containing element.
 */
function template_preprocess_customer(array &$variables) {
  // Fetch Customer Entity Object.
  $customer = $variables['elements']['#customer'];

  // Helpful $content variable for templates.
  foreach (Element::children($variables['elements']) as $key) {
    $variables['content'][$key] = $variables['elements'][$key];
  }
}
