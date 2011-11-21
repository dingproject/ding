<?php
/**
 * @file
 *
 * Template for review form and reviews themselves.
 */

global $user;

?>
<div class="voxb">
  <div class="reviewsContainer">
    <h3><?php print t('User reviews'); ?></h3>
    <div class="userReviews">
    <?php
      $limit = variable_get('voxb_reviews_per_page', VOXB_REVIEWS_PER_PAGE);

      foreach ($data['voxb_item']->getReviews('review') as $k => $v) {
        if ($k >= $limit) {
          break;
        }

        echo theme('voxb_review_record',
          array('author' => $v->getAuthorName(), 'review' => $v->getText())
        );

      }
    ?>
    </div>
    <?php
    // Review count
    $reviews = $data['voxb_item']->getReviews('review')->getCount();

    // Display pagination links.
    echo '<div id="pager_block">';
    echo theme('voxb_review_pager', array('count' => $reviews, 'limit' => $limit, 'faust_number' => $data['faust_number'], 'cur_page' => 1));
    echo '</div>';
    echo '<div style="clear: both;"></div><br />';

    if ($user->uid && $data['able']) :
      if ($data['user_data']['review']['title'] != 'videoreview') :
        if ($data['user_data']['review']['title'] == 'review') {
          $params = array(
            'faust_number' => $data['faust_number'],
            'review_content' => $data['user_data']['review']['data'],
            'action' => 'update',
          );
        }
        else {
          $params = array(
            'faust_number' => $data['faust_number'],
            'review_content' => '',
            'action' => 'submit',
          );
        }
    ?>
    <div class="addReviewContainer">
      <?php echo drupal_get_form('ding_voxb_review_form', $params); ?>
    </div>
    <?php ;endif ;endif ?>
  </div>
</div>
