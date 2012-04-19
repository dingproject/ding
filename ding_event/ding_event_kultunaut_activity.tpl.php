<?php

/**
 * @file
 * Template to render a node as KultuNaut XML feed activity.
 */
?>
  <activity type="<?php echo $node->activity_type; ?>">
    <title><?php echo check_plain($node->title); ?></title>
    <?php // Create a uid using all the static values we have ?>
    <uid><?php echo md5($node->nid . $node->type . $node->language . $node->vid . $node->revision_uid); ?></uid>
    <description>
      <?php echo htmlspecialchars('<p>' . check_plain($node->field_teaser[0]['value']) . '</p>'); ?>
      <?php echo htmlspecialchars($node->body); ?>
    </description>
    <image><?php echo url($node->field_list_image[0]['filepath'], array('absolute' => TRUE)) ?></image>
    <stardate><?php echo $node->activity_start ?></stardate>
    <enddate><?php echo $node->activity_end ?></enddate>
    <bibname><?php echo $node->activity_library['name']; ?></bibname>
    <bibstreet><?php echo $node->activity_library['street']; ?></bibstreet>
    <bibzip><?php echo $node->activity_library['postal_code']; ?></bibzip>
    <bibtown><?php echo $node->activity_library['city']; ?></bibtown>
    <bibphone><?php echo $node->activity_library['phone']; ?></bibphone>
    <at_street><?php echo $node->activity_library['street']; ?></at_street>
    <at_zip><?php echo $node->activity_library['postal_code']; ?></at_zip>
    <at_town><?php echo $node->activity_library['city']; ?></at_town>
    <at_phone><?php echo $node->activity_library['phone']; ?></at_phone>
    <url><?php echo url($node->path, array('absolute' => TRUE, 'alias' => TRUE)); ?></url>
    <price><?php echo $node->activity_price; ?></price>
    <targets>
    <?php foreach ($node->activity_targets as $target_name): ?>
      <target><?php echo $target_name; ?></target>
    <?php endforeach; ?>
    </targets>

    <categories>
    <?php foreach ($node->activity_categories as $category_name): ?>
      <category><?php echo $category_name; ?></category>
    <?php endforeach; ?>
    </categories>
  </activity>

