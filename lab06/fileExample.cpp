/**********************
* Luke Brown          *
* luke4@g.clemson.edu *
* Section 003         *
* Lab 6               *
* 09-27-16            *
**********************/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void swapCase(istream& in, ostream& out);

int main(int argc, char *argv[] )
{
   if (argc != 3) //check for proper args
   {
      cout << "Incorrect number of arguments!\n";
   } else {
      ifstream in (argv[1]);
      ofstream out (argv[2]);
      swapCase(in, out); //run conversion
      in.close(); //close streams
      out.close();
   }
   return 0;
}

void swapCase(istream& in, ostream& out)
{
   char c;
   int i = 0;
   c = in.get();
   while (c != EOF)
   {
      if (isupper(c))
      {
         c = tolower(c);
      }
      else if (islower(c))
      {
         c = toupper(c);
      } else {
         i++;        //counter for characters that couldnt be converted
      }
      out << c;
      c = in.get();
   }
   if (i!=0)
   {
      //cout << "Unable to convert: " << i << " characters." << endl;
   }
}
