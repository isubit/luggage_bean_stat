<?php
/**
 * @file
 * luggage_bean_stat.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function luggage_bean_stat_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-stat-field_stat_button'.
  $field_instances['bean-stat-field_stat_button'] = array(
    'bundle' => 'stat',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Show a button at the bottom of the Stat card.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_stat_button',
    'label' => 'Button',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-stat-field_stat_caption'.
  $field_instances['bean-stat-field_stat_caption'] = array(
    'bundle' => 'stat',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Supporting text for the large title. Recommended length is no more than 150 characters.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_stat_caption',
    'label' => 'Caption',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'suitcase_interim_block' => 'suitcase_interim_block',
          'wysiwyg' => 'wysiwyg',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'suitcase_interim_block' => array(
              'weight' => 0,
            ),
            'wysiwyg' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'bean-stat-field_stat_color_variant'.
  $field_instances['bean-stat-field_stat_color_variant'] = array(
    'bundle' => 'stat',
    'default_value' => array(
      0 => array(
        'value' => 'stat-bean_red',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose a color variant to coordinate with the background color. If this card will be on a red or dark background, choose White (which uses mostly white text). If it will be on a white or light background, choose Red (which uses red and black text). <br>
<br><strong>This shouldn\'t need to be changed unless the page is redesigned or the card is moved. </strong>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_stat_color_variant',
    'label' => 'Color Variant',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-stat-field_stat_icon'.
  $field_instances['bean-stat-field_stat_icon'] = array(
    'bundle' => 'stat',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the icon that will appear before your card\'s label. You can also choose to not have an icon.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_stat_icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Button');
  t('Caption');
  t('Choose a color variant to coordinate with the background color. If this card will be on a red or dark background, choose White (which uses mostly white text). If it will be on a white or light background, choose Red (which uses red and black text). <br>
<br><strong>This shouldn\'t need to be changed unless the page is redesigned or the card is moved. </strong>');
  t('Color Variant');
  t('Icon');
  t('Show a button at the bottom of the Stat card.');
  t('Supporting text for the large title. Recommended length is no more than 150 characters.');
  t('This is the icon that will appear before your card\'s label. You can also choose to not have an icon.');

  return $field_instances;
}
