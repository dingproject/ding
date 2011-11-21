<?php
/**
 * @file
 *
 * Template tag form and tags themselves.
 */

global $user;

?>
<div class="voxb">
  <div class="tagsContainer">
    <h3><?php print t('Tags'); ?></h3>
    <div class="recordTagHighlight">
    <?php
      foreach ($data['voxb_item']->getTags() as $v) {
        echo theme('voxb_tag_record', array('tag_name' => $v->getName()));
      }
    ?>
    </div>
    <div class="clearfix">&nbsp;</div>
    <?php
      if (($user->uid != 0 && $data['able'])) {
        echo drupal_get_form('ding_voxb_tag_form', $data['faust_number']);
      }
    ?>
  </div>
</div>
