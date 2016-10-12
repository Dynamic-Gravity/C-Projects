/**********************
* Luke Brown          *
* luke4@g.clemson.edu *
* Section 003         *
* Lab 8               *
* 10-11-16            *
**********************/
#include <iostream>

class Date
{
   private:
      int day, month, year;
   public:
      Date(); //default constructor
      /*
      Date(int);
      Date(int, int);*/
      Date(int, int, int); //expected constructor

   //Get methods
   int getDay();
   int getMonth();
   int getYear();

   //Set methods
   void setDay(int);
   void setMonth(int);
   void setYear(int);

   //print methods
   void printDate();
   //void printCurrentDate();
   //void printHelp(int);

};
