const express = require('express');
const router = express.Router();
const keys = require('../keys');
const Lens = require('../models/Lens');
const middleware = require('../middleware');

// Setup stripe 
const stripe = require('stripe')(keys.stripe.privkey);

// User cart page
router.get('/cart', middleware.isLoggedIn, (req, res) => {
  Lens.find({}, (err, lenses) => {
    if(err) {
      console.log(err);
    } else {
      let lensArray = [];
      req.user.cart.forEach((item) => {
        lenses.forEach((lens) => {
          if(item.toString() == lens._id.toString()) {
            lensArray.push(lens);
          }
        });
      });
      res.render('cart', {lenses: lensArray});
    }
  });
});

// Stripe payment form
router.get('/pay', middleware.isLoggedIn, (req, res) => {
  let amount = 500 * req.user.cart.length;

  res.render('pay.ejs', {pubkey: keys.stripe.pubkey, amount: amount});
});

// Payment processing logic
router.post('/charge', middleware.isLoggedIn, (req, res) => {
  let amount = 500 * req.user.cart.length;

  stripe.customers.create({
    email: req.body.stripeEmail,
    source: req.body.stripeToken
  })
  .then(customer =>
    stripe.charges.create({
      amount,
      description: "Sample Charge",
      currency: "usd",
      customer: customer.id
    }))
  .then(() => {
    // Move items from cart to lenses array
    req.user.cart.forEach((item) => {
      req.user.lenses.push(item);
    });
    // Empty cart
    req.user.cart = [];
    // Save user model
    req.user.save();

    res.redirect('/');
  });
});

module.exports = router;