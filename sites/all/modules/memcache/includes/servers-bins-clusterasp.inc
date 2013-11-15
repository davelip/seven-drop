<?php
/**
 * File utilizzato richiamato da dentro settings.php con la configurazione condivisa per clusterasp
 * @author 	patrizio bartolozzi p.bartolozzi@softecspa.it
 */
 
$conf['memcache_key_prefix'] = $_SERVER['SERVER_NAME'] . $_SERVER['SERVER_PORT'];
$conf['memcache_servers'] = array(
    'cache-asp01.backplane:11211' => 'cluster1',
    'cache-asp01.backplane:11212' => 'cluster2',
    'cache-asp01.backplane:11213' => 'cluster3',
    'cache-asp01.backplane:11214' => 'cluster4',
    'cache-asp01.backplane:11215' => 'cluster5',
    'cache-asp01.backplane:11216' => 'cluster6',
    'cache-asp01.backplane:11217' => 'cluster7',
    'cache-asp02.backplane:11211' => 'cluster1',
    'cache-asp02.backplane:11212' => 'cluster2',
    'cache-asp02.backplane:11213' => 'cluster3',
    'cache-asp02.backplane:11214' => 'cluster4',
    'cache-asp02.backplane:11215' => 'cluster5',
    'cache-asp02.backplane:11216' => 'cluster6',
    'cache-asp02.backplane:11217' => 'cluster7',
    'cache-asp03.backplane:11211' => 'cluster1',
    'cache-asp03.backplane:11212' => 'cluster2',
    'cache-asp03.backplane:11213' => 'cluster3',
    'cache-asp03.backplane:11214' => 'cluster4',
    'cache-asp03.backplane:11215' => 'cluster5',
    'cache-asp03.backplane:11216' => 'cluster6',
    'cache-asp03.backplane:11217' => 'cluster7',
);

$conf['memcache_bins'] = array(
  'cache' => 'cluster1',
  'cache_apachesolr' => 'cluster1',
  'cache_block' => 'cluster2',
  'cache_bootstrap' => 'cluster1',
  'cache_content' => 'cluster3',
  'cache_emfield_xml' => 'cluster1',
  'cache_entity_comment' => 'cluster1',
  'cache_entity_file' => 'cluster1',
  'cache_entity_node' => 'cluster1',
  'cache_entity_taxonomy_term' => 'cluster1',
  'cache_entity_taxonomy_user' => 'cluster1',
  'cache_entity_taxonomy_vocabulary' => 'cluster1',
  'cache_field' => 'cluster1',
  'cache_filter' => 'cluster4',
  'cache_form' => 'database',
  'cache_gmaps_geocode' => 'cluster1',
  'cache_hierarchical_select' => 'cluster1',
  'cache_image' => 'cluster1',
  'cache_imageinfo' => 'cluster3',
  'cache_l10n_update' => 'cluster1',
  'cache_location' => 'cluster1',
  'cache_media_xml' => 'cluster1',
  'cache_media_youtube_status' => 'cluster1', 
  'cache_menu' => 'cluster6',
  'cache_node' => 'cluster1',
  'cache_page' => 'cluster1',
  'cache_path' => 'cluster4',
  'cache_rules' => 'cluster1',
  'cache_token' => 'cluster1',
  'cache_uc_price' => 'cluster3',
  'cache_update' => 'cluster3',
  'cache_user' => 'cluster4',
  'cache_variable' => 'cluster1',
  'cache_views' => 'cluster5',
  'cache_views_data' => 'cluster5',
  'session' => 'cluster7',
  'users' => 'cluster7'
);