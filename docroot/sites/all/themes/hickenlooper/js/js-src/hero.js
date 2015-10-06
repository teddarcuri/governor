(function ($) {
  Drupal.behaviors.instantiateFlickityGallery = {
    attach: function (context, settings) {
        // var $gallery = $('.slideshow').flickity({}),
        //     flkty = Flickity.data( $('.slideshow')[0] ),
        //     activeSlide,
        //     images = [
        //         "https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/Black-Canyon-3.jpg",
        //         "https://upload.wikimedia.org/wikipedia/commons/e/e7/Governor_John_Hickenlooper.jpg",
        //         "https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/co-meadow-forest.jpg"
        //     ];
        //
        //     function changeBgImg() {
        //         activeSlide = flkty.selectedIndex
        //
        //         var background = "url('" + images[activeSlide] + "') top center no-repeat";
        //
        //         $(".slideshow").css({
        //             "background": background,
        //             "background-size" : "cover"
        //         });
        //     }
        //
        //     // Load initial bg image
        //     changeBgImg();
        //
        //     // Change BG image based upon selected slide
        //     $gallery.on( 'cellSelect', function() {
        //         changeBgImg();
        //     })


        $('.slideshow-bg').slick({
         slidesToShow: 1,
         slidesToScroll: 1,
         arrows: false,
         fade: true,
         asNavFor: '.slideshow'
        });

        $('.slideshow').slick({
         slidesToShow: 1,
         slidesToScroll: 1,
         asNavFor: '.slideshow-bg',
         dots: true,
         centerMode: true,
         focusOnSelect: true
        });



    }
  };

})(jQuery);
