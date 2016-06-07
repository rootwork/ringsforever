
// Instantiate fastclick.js
if ('addEventListener' in document) {
    document.addEventListener('DOMContentLoaded', function() {
        FastClick.attach(document.body);
    }, false);
}

// Scripts to add once the page has loaded.
document.addEventListener("DOMContentLoaded", function() {

  // Add captions to images with zoom set, based on their title attribute.
  var images = document.querySelectorAll( ".imagezoom-image" ),
  L = images.length,
  fig = document.createElement("figure"),
  who,
  temp
  while(L) {
    temp = fig.cloneNode(false);
    who = images[--L];
    caption = who.getAttribute("title");
    who.parentNode.insertBefore(temp, who);
    content = document.createElement( "figcaption" );
    content.className = "image__caption";
    content.innerHTML = caption;
    temp.appendChild(who);
    temp.appendChild(content);
  }

/**
 * The jQuery plugin namespace.
 * @external "jQuery.fn"
 * @see {@link http://learn.jquery.com/plugins/|jQuery Plugins}
 */

  // Add title attribute to home page featured ring blocks.
  jQuery('.featured-categories__item').attr('title', 'View all titanium rings in this category');

  // Remove image titles when they appear in home page featured ring blocks.
  jQuery('.field-name-field-cat-featured-rings img').attr('title', '');

/**
 * Shopping cart manipulations
 * @function external: "jQuery.fn".tooltipster
 * @class cart
 *
 * @author Ivan Boothe
 */

  // Add class to indicate items in the cart
  if (jQuery('.line-item-quantity').length) {
    jQuery('body').addClass('has-items');
  }

  // Add a title attribute to the checkout button
  jQuery('.block-shopping-cart-block .line-item-summary-checkout a').attr('title', 'View your cart and checkout');

  // Add class to select buttons on click
  jQuery('.block-shopping-cart-block .line-item-summary-checkout a, .commerce-add-to-cart-confirmation .button.checkout a, .field-type-commerce-product-reference form.commerce-add-to-cart .form-submit').click(function(){
    jQuery(this).addClass('is-clicked');
  });

  // Display message when add-to-cart button is clicked
  jQuery('.field-type-commerce-product-reference form.commerce-add-to-cart .form-submit').click(function(){
    jQuery(this).after('<p class="is-adding">Adding this ring to your cart...</p>');
  });

/**
 * Form manipulations
 * @function external: "jQuery.fn".tooltipster
 * @class form
 *
 * @author Ivan Boothe
 */

  // Preselect 'United States' in all country lists
  jQuery('select.country option[value="US"]').attr('selected','selected');

/**
 * Tooltips
 * @function external: "jQuery.fn".tooltipster
 * @class tooltips
 */

  /**
  * Adding Tooltipster tooltip overlays.
  * @name tooltipster
  *
  * @memberOf tooltips
  * @author Caleb Jacob and Louis Ameline
  */

  // Main menu
  jQuery('.main-menu a').tooltipster({
    position: 'bottom'
  });

  // Secondary menu
  jQuery('.secondary-menu a').tooltipster({
  });

  // Cart block
  jQuery('.block-shopping-cart-block .content a').tooltipster({
  });

  // Home page featured rings
  jQuery('.featured-categories__item').tooltipster({
  });

  // All other links in content and footer areas
  jQuery('.section-content a[title], .section-footer a[title]').tooltipster();

//
// Closing tag
//
});
