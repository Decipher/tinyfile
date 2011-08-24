/**
 * @file
 * Contains core javascript functions for the tinyFile module.
 */

(function() {
  Drupal.behaviors.tinyFile = function(context) {
    if (context !== document) {
      if (!$(context).find('#edit-field-tinyfile-file-0-upload').length) {
        $('.drophere').replaceWith($('<img>').attr('src', Drupal.settings.basePath + Drupal.settings.tinyFilePath + '/images/ajax-loader.gif'));
        jQuery.post($('#node-form').attr('action'), $('#node-form').serializeArray(), function(data) {
          $('#node-form').replaceWith(data.data);
        }, 'json');
      }
    }
  }
})(jQuery);
