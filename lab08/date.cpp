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
Date::Date() //default constructor
{//this constructor inits everything to 0
   setDay(0);
   setMonth(0);
   setYear(0);
}
Date::Date(int d, int m, int y) //expected constructor
{
   setDay(d);
   setMonth(m);
   setYear(y);
}
int Date::getDay(){
   return day;
}
int Date::getMonth(){
   return month;
}
int Date::getYear(){
   return year;
}

//Set methods
void Date::setDay(int d){
   //validates user input
   if (d > 31 || d <= 0)
   {
      //printHelp(1);
   } else {
      day = d;
   }
}
void Date::setMonth(int m) {
   if (m > 12 || m < 1)
   {
      //printHelp(2);
   } else {
      month = m;
   }
}
void Date::setYear(int y){
   year = y;
}

//print methods
void Date::printDate(){
//print date
   cout << getMonth() << "/" << getDay() << "/" << getYear() << "\n";
}
/*
void printCurrentDate(){
cout << "The second date is: " << getMonth() << "/" << getDay() << "/" << getYear() << "\n";
}

void printHelp(int i){
   switch(i)
   {
      case 1 : cout << "Plese enter a valid month day (1-31)\n";
       break;
      case 2 : cout << "Please enter a valid Gregorian month number (1-12)\n";
       break;
      default : cout << "Please enter constructor args in DD/MM/YYYY format\n";
   }
}
*/
0
