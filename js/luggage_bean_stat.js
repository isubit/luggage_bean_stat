(function ($) {
  $(document).ready(function() {
    $('select#edit-field-stat-icon-und').change(function(){
        if ($('select#edit-field-stat-icon-und') != '_none') {
          if ($('i.select').length == 0) {
            $('<i class=\"fa '+ $('select#edit-field-stat-icon-und').val() +' select\" style=\"margin: 1rem 0 0 1rem\"></i>').insertAfter("#edit-field-stat-icon-und");
          } else {
            $('i.select').attr('class', 'fa '+ $('select#edit-field-stat-icon-und').val() +' select');
          }
        }
      });
  });
})(jQuery);
