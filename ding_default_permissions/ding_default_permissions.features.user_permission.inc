<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ding_default_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access admin theme
  $permissions['access admin theme'] = array(
    'name' => 'access admin theme',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: access environment indicator
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: access similarterms content
  $permissions['access similarterms content'] = array(
    'name' => 'access similarterms content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: access site-wide contact form
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: administer advanced pane settings
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer comment notify
  $permissions['administer comment notify'] = array(
    'name' => 'administer comment notify',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer pane access
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer pane visibility
  $permissions['administer pane visibility'] = array(
    'name' => 'administer pane visibility',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer recommendation panes
  $permissions['administer recommendation panes'] = array(
    'name' => 'administer recommendation panes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer redirects
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer search carousel
  $permissions['administer search carousel'] = array(
    'name' => 'administer search carousel',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer similarterms content
  $permissions['administer similarterms content'] = array(
    'name' => 'administer similarterms content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer site-wide contact form
  $permissions['administer site-wide contact form'] = array(
    'name' => 'administer site-wide contact form',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: change other user’s passwords
  $permissions['change other user’s passwords'] = array(
    'name' => 'change other user’s passwords',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: collapse format fieldset by default
  $permissions['collapse format fieldset by default'] = array(
    'name' => 'collapse format fieldset by default',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: collapsible format selection
  $permissions['collapsible format selection'] = array(
    'name' => 'collapsible format selection',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: configure libraries
  $permissions['configure libraries'] = array(
    'name' => 'configure libraries',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: create article content
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: create campaign content
  $permissions['create campaign content'] = array(
    'name' => 'create campaign content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: create event content
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: create feature content
  $permissions['create feature content'] = array(
    'name' => 'create feature content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: create library content
  $permissions['create library content'] = array(
    'name' => 'create library content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: create profile content
  $permissions['create profile content'] = array(
    'name' => 'create profile content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: create topic content
  $permissions['create topic content'] = array(
    'name' => 'create topic content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete any article content
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: delete any campaign content
  $permissions['delete any campaign content'] = array(
    'name' => 'delete any campaign content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete any event content
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: delete any feature content
  $permissions['delete any feature content'] = array(
    'name' => 'delete any feature content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: delete any library content
  $permissions['delete any library content'] = array(
    'name' => 'delete any library content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: delete any profile content
  $permissions['delete any profile content'] = array(
    'name' => 'delete any profile content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: delete any topic content
  $permissions['delete any topic content'] = array(
    'name' => 'delete any topic content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: edit any article content
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: edit any campaign content
  $permissions['edit any campaign content'] = array(
    'name' => 'edit any campaign content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit any event content
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: edit any feature content
  $permissions['edit any feature content'] = array(
    'name' => 'edit any feature content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: edit any library content
  $permissions['edit any library content'] = array(
    'name' => 'edit any library content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: edit any profile content
  $permissions['edit any profile content'] = array(
    'name' => 'edit any profile content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: edit any topic content
  $permissions['edit any topic content'] = array(
    'name' => 'edit any topic content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: pay using dibs
  $permissions['pay using dibs'] = array(
    'name' => 'pay using dibs',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: preview similar content by terms
  $permissions['preview similar content by terms'] = array(
    'name' => 'preview similar content by terms',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: show format selection for blocks
  $permissions['show format selection for blocks'] = array(
    'name' => 'show format selection for blocks',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: show format selection for comments
  $permissions['show format selection for comments'] = array(
    'name' => 'show format selection for comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: show format selection for nodes
  $permissions['show format selection for nodes'] = array(
    'name' => 'show format selection for nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: subscribe to comments
  $permissions['subscribe to comments'] = array(
    'name' => 'subscribe to comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: translate interface
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: use admin toolbar
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: use panels caching features
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: use panels dashboard
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: view all panes
  $permissions['view all panes'] = array(
    'name' => 'view all panes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: view imagecache 120_120
  $permissions['view imagecache 120_120'] = array(
    'name' => 'view imagecache 120_120',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache 180_x
  $permissions['view imagecache 180_x'] = array(
    'name' => 'view imagecache 180_x',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache 680_200_crop
  $permissions['view imagecache 680_200_crop'] = array(
    'name' => 'view imagecache 680_200_crop',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache 80_x
  $permissions['view imagecache 80_x'] = array(
    'name' => 'view imagecache 80_x',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache ting_search_carousel
  $permissions['view imagecache ting_search_carousel'] = array(
    'name' => 'view imagecache ting_search_carousel',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: view search carousel
  $permissions['view search carousel'] = array(
    'name' => 'view search carousel',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: edit advanced node properties
  $permissions['edit advanced node properties'] = array(
    'name' => 'view search carousel',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  // Exported permission: access environment indicator
  $permissions['access environment indicator'] = array(
    'name' => 'view search carousel',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'author',
      '2' => 'editor',
    ),
  );

  return $permissions;
}
