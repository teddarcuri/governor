(function ($) {
    Drupal.behaviors.headerOnScroll = {
      attach: function (context, settings) {
          //caches a jQuery object containing the header element
          var header = $("#header-render");
        //   $(window).scroll(function() {
        //       var scroll = $(window).scrollTop();
          //
        //       if (scroll >= 500) {
        //           header.addClass("small");
        //       } else {
        //           header.removeClass("small");
        //       }
        //   });
      }
    };
})(jQuery);
