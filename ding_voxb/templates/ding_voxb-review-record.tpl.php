<?php
/**
 * @file
 *
 * Single review template.
 */
?>

<div class="voxbReview">
  <?php print t('Written by'); ?> <em><?php echo htmlspecialchars($data['author']); ?></em>
  <div class="reviewContent"><?php echo htmlspecialchars($data['review']); ?></div>
</div>
