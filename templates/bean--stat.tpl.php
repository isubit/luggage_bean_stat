<div class="stat-card">
  <?php print render($title_suffix) ?>

  <div class="stat-card_icon">
    <span class="fa <?php print $bean->field_stat_icon['und'][0]['value']; ?>"></span>
  </div>

  <div class="stat-card_content">

    <div class="stat-card_title">
      <?php print $title; ?>
    </div>

    <div class="stat-card_caption">
      <?php print $bean->field_stat_caption['und'][0]['value'] ?>
    </div>

    <a class="stat-card_button" href="<?php print $bean->field_stat_button['und'][0]['url']; ?>"><?php print $bean->field_stat_button['und'][0]['title']; ?></a>

  </div>
</div>