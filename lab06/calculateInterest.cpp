/**********************
* Luke Brown          *
* luke4@g.clemson.edu *
* Section 003         *
* Lab 6               *
* 09-27-16            *
**********************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
   double principal = 1000.00;
   double rate = .05;
   double a = 0.00;
   int i = 0;
   cout << "Initial principal: " << principal << "\n";
   cout << "Interest rate: " << rate << "\n";
   cout << "Year Amount on deposite" << "\n";
   for (i=0;i<=10;i++)
   {
    a = principal*pow((1+rate), i);
    cout << i << "      " << fixed << setprecision(2) << a << "\n";
   }
   return 0;
}
