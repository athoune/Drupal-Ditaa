<?php


function ditaa_admin_settings() {
	$form['ditaa_url'] = array(
		'#type' => 'textfield',
		'#title' => 'url',
		'#default_value' => variable_get('ditaa_url', 'http://localhost:8080/ditaa'),
		'#description' => t('ditaa web service url'),
	);
	$form['ditaa_flags'] = array(
		'#type' => 'checkboxes',
		'#options' => array('antialias', 'shadows', 'round corner', 'separation'),
		'#title' => 'options',
		'#default_value' => variable_get('ditaa_flags', array('antialias', 'shadows')),
		'#description' => t('Flags'),
	);
	return system_settings_form($form);
}
