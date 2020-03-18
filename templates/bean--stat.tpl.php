<div class="stat-card <?php if(isset($bean->field_stat_color_variant['und'][0]['value'])): print $bean->field_stat_color_variant['und'][0]['value']; endif; ?>">
  <?php print render($title_suffix) ?>

  <?php if (isset($bean->field_stat_icon['und'][0]['value'])): ?>
    <div class="stat-card_icon">
      <span class="fa <?php print $bean->field_stat_icon['und'][0]['value']; ?>"></span>
    </div>
  <?php endif; ?>
  
  <?php if (isset($bean->field_stat_image['und'][0]['uri'])): ?>
    <div class="stat-card_image"><img src="<?php print file_create_url($bean->field_stat_image['und'][0]['uri']); ?>" alt="<?php print $bean->field_stat_image['und'][0]['alt']; ?>" />
    </div>
  <?php endif; ?>

  <div class="stat-card_content">

    <?php if ($bean->title !== ''): ?>
      <div class="stat-card_title">
        <?php print $title; ?>
      </div>
    <?php endif; ?>

    <?php if (isset($bean->field_stat_caption['und'][0]['value'])): ?>
      <div class="stat-card_caption">
        <?php print $bean->field_stat_caption['und'][0]['value'] ?>
      </div>
    <?php endif; ?>

    <?php if (isset($bean->field_stat_button['und'][0]['url'])): ?>
      <a class="stat-card_button" href="<?php print $bean->field_stat_button['und'][0]['url']; ?>"><?php print $bean->field_stat_button['und'][0]['title']; ?></a>
    <?php endif; ?>

  </div>
</div>