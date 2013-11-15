<?php
/**
 * File utilizzato richiamato da dentro settings.php con la configurazione condivisa per clusteramazondev
 * @author 	patrizio bartolozzi p.bartolozzi@softescpa.it
 */
 
$conf['memcache_key_prefix'] = $_SERVER['SERVER_NAME'] . $_SERVER['SERVER_PORT'];

$conf['memcache_servers'] = array(
	'int-popolodb-master:11211' => 'cluster1',
	'int-popolodb-slave:11211' => 'cluster1',	
);
$conf['memcache_bins'] = array(
  'cache' => 'cluster1',
  'cache_apachesolr' => 'cluster1',
  'cache_block' => 'cluster1',
  'cache_bootstrap' => 'cluster1',
  'cache_content' => 'cluster1',
  'cache_emfield_xml' => 'cluster1',
  'cache_entity_comment' => 'cluster1',
  'cache_entity_file' => 'cluster1',
  'cache_entity_node' => 'cluster1',
  'cache_entity_taxonomy_term' => 'cluster1',
  'cache_entity_taxonomy_user' => 'cluster1',
  'cache_entity_taxonomy_vocabulary' => 'cluster1',
  'cache_field' => 'cluster1',
  'cache_filter' => 'cluster1',
  'cache_form' => 'database',
  'cache_gmaps_geocode' => 'cluster1',
  'cache_hierarchical_select' => 'cluster1',
  'cache_image' => 'cluster1',
  'cache_imageinfo' => 'cluster1',
  'cache_l10n_update' => 'cluster1',
  'cache_location' => 'cluster1',
  'cache_media_xml' => 'cluster1',
  'cache_media_youtube_status' => 'cluster1', 
  'cache_menu' => 'cluster1',
  'cache_node' => 'cluster1',
  'cache_page' => 'cluster1',
  'cache_path' => 'cluster1',
  'cache_rules' => 'cluster1',
  'cache_token' => 'cluster1',
  'cache_uc_price' => 'cluster1',
  'cache_update' => 'cluster1',
  'cache_user' => 'cluster1',
  'cache_variable' => 'cluster1',
  'cache_views' => 'cluster1',
  'cache_views_data' => 'cluster1',
  'session' => 'cluster1',
  'users' => 'cluster1'
);
