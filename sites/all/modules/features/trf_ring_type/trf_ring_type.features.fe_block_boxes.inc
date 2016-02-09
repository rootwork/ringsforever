<?php
/**
 * @file
 * trf_ring_type.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function trf_ring_type_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ring pages: Free';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ring_free';
  $fe_block_boxes->body = 'Includes <a href="#">free shipping</a>, <a href="#">free engraving</a> and <a href="#">free resizing</a>.';

  $export['ring_free'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ring pages: Sizing';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ring_sizing';
  $fe_block_boxes->body = 'We\'re committed to a <a href="#">guaranteed perfect fit</a> for your titanium wedding ring.

Surprisingly, the sizing equipment used by jewelers can vary a lot. That\'s why when you order, we\'ll send <a href="#">finger sizers to you in the mail</a> to ensure your ring fits perfectly.';

  $export['ring_sizing'] = $fe_block_boxes;

  return $export;
}