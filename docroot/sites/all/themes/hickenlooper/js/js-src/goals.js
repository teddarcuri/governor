(function ($) {
    Drupal.behaviors.goalsWall = {
      attach: function (context, settings) {
          //caches a jQuery object containing the header element
         $('.goals-wall').GITheWall({
             nextButtonClass: 'fa fa-arrow-right',
             prevButtonClass: 'fa fa-arrow-left',
             closeButtonClass: 'fa fa-times',
             margin: {
              top: 50,
              bottom: 40
            },
            scrollOffset: 310,

         });

         // Fade in goals
        //  $('.goals-wall li')
        //     .velocity("transition.slideUpIn", { stagger: 250 });
      }
    };
})(jQuery);
