<?php
/**
 * @file
 * socialapps.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function socialapps_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_details|node|project|form';
  $field_group->group_name = 'group_basic_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Basic Details',
    'weight' => '9',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic-details field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_basic_details|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|user|user|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '13',
    'children' => array(
      0 => 'field_employee_id',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'account',
      4 => 'picture',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_basic|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|project|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '10',
    'children' => array(
      0 => 'field_thumbnail',
      1 => 'field_spotlight_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_media|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|node|project|form';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project',
    'weight' => '9',
    'children' => array(
      0 => 'group_media',
      1 => 'group_resources',
      2 => 'group_technologies',
      3 => 'group_basic_details',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-project field-group-htabs',
      ),
    ),
  );
  $export['group_project|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_qualification_exp|user|user|form';
  $field_group->group_name = 'group_qualification_exp';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'label' => 'Qualification & Experience',
    'weight' => '14',
    'children' => array(
      0 => 'field_experence',
      1 => 'field_skills',
      2 => 'group_qualification',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-qualification-exp field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_qualification_exp|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_qualification|user|user|default';
  $field_group->group_name = 'group_qualification';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Qualification',
    'weight' => '6',
    'children' => array(
      0 => 'field_qualfication',
      1 => 'field_subject',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-qualification field-group-fieldset',
      ),
    ),
  );
  $export['group_qualification|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_qualification|user|user|form';
  $field_group->group_name = 'group_qualification';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_qualification_exp';
  $field_group->data = array(
    'label' => 'Qualification',
    'weight' => '8',
    'children' => array(
      0 => 'field_qualfication',
      1 => 'field_subject',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Qualification',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-qualification field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_qualification|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_qualification|user|user|full';
  $field_group->group_name = 'group_qualification';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Qualification',
    'weight' => '5',
    'children' => array(
      0 => 'field_qualfication',
      1 => 'field_subject',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Qualification',
      'instance_settings' => array(
        'classes' => 'group-qualification field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_qualification|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resources|node|project|form';
  $field_group->group_name = 'group_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '11',
    'children' => array(
      0 => 'field_resources',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resources field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_resources|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technologies|node|project|form';
  $field_group->group_name = 'group_technologies';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Technologies',
    'weight' => '12',
    'children' => array(
      0 => 'field_technologies',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-technologies field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_technologies|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user|user|user|form';
  $field_group->group_name = 'group_user';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_qualification_exp',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-user field-group-htabs',
      ),
    ),
  );
  $export['group_user|user|user|form'] = $field_group;

  return $export;
}
