/**********************
* Luke Brown          *
* luke4@g.clemson.edu *
* Section 003         *
* Lab 8               *
* 10-11-16            *
**********************/
#include <iostream>
#include "date.h"
using namespace std;
int main()
{
   //init our objects
   Date date1 = Date(17,9,1994); 
   Date date2 = Date(11,10,2016);

   cout << "My name is Luke Brown and my birthday is: ";
   date1.printDate();
   cout << "\tThe second date is: ";
   date2.printDate();


   return 0;
}
