/**********************
* Luke Brown          *
* luke4@g.clemson.edu *
* Section 003         *
* Lab 9               *
* 10-18-16            *
**********************/
#include <iostream>
#include "money.h"

using namespace std;
      
      //   CONSTRUCTORS   //
      money_t::money_t() { set(0,0); }
      
      money_t::money_t(double amount) {
         set_dollars(static_cast<int>(amount));
         set_cents(static_cast<int>((amount-get_dollars())*100));
      }

      money_t::money_t(int dollars, int cents) {
         set_dollars(dollars);
         set_cents(cents);
      }

      //   DESTRUCTOR   //
      money_t::~money_t() { cout << "Destructor invoked" << endl; }

      //   METHODS   //

      //   GETS   //
      int money_t::get_dollars(){ return dollars; }

      int money_t::get_cents() { return cents; }

      //   SETS   //
      void money_t::set_dollars( int amount){ 
         //make sure we're not passed negative values
         if( amount >= 0) { dollars = amount; }
         else { dollars = 0; }
      }
      
      void money_t::set_cents( int amount){ 
         //make sure we're not passed negative values
         if( amount >= 0){ cents = amount; }
         else { cents = 0;}
      }
      
      void money_t::set(int dollar_amount, int cent_amount){
         //check for negative value in dollars
         if( dollar_amount >= 0){ money_t::set_dollars( dollar_amount); }
         else { money_t::set_dollars(0); }
         //check for negative value in cents
         if(cent_amount >= 0){ money_t::set_cents( cent_amount); }
         else { money_t::set_cents(0); }
      }
      
      int money_t::value_in_cents(){
      //returns money in cents
         return (money_t::get_dollars()*100)+money_t::get_cents();
      }
      
      double money_t::compute_value(){
         double dollar = static_cast<double>(money_t::get_dollars());
         double cents =  static_cast<double>(money_t::get_cents())/100;
         return dollar + cents;
      }
