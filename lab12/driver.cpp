/**
 * Luke Brown
 * CPSC 1020 003, F16
 * Lab 11
 * luke4@g.clemson.edu
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "functions.h"
using namespace std;
int main( int argc, char* argv[] )
{
    ifstream in(argv[1]);
    int buffer, flag = 0, size = 0;
    std::vector<int> container;

    // Using the command line arguments check for a valid input file
    // If there is not one, give the user a message and exit the program
    if( !in.is_open() ){
       cout << "Can't open file, or no file has been passed via arguments!" << endl;
       return -1;
    } else {
        cout << endl << endl << "File " << argv[1] << " opened, begin reading...";
        //while(in.peek() != EOF);
        while( in >> buffer ){
          if( flag == 0 ){
            buffer >> size;
            flag = 1;
          } else {
            container.push_back(buffer);
          }        
        }
        in.close();
    }
    cout << "...complete!" << endl << int(container.size()) << " values stored." << endl;
    
    lab11 selection( &container, container.size() );
    selection.print_array(container, container.size());
    //lab11 linear(&container, container.size() );


    // Using selection sort, sort the array
    // Then print the array


    // Ask the user for a number


    // Using linear search, search the array for the user's number


    // Print if the number was or was not found in the array
    

    return 0;
}
