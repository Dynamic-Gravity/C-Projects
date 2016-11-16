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
#include <stdint.h>
#include "functions.h"
using namespace std;
int main( int argc, char* argv[] )
{
    ifstream in(argv[1]);
    int buffer, key, flag = 0, size = 0;
    std::vector<int> container;

    // Using the command line arguments check for a valid input file
    // If there is not one, give the user a message and exit the program
    if( !in.is_open() ){
       cout << "Can't open file, or no file has been passed via arguments!" << endl;
       return -1;
    } else {
        //cout << endl << endl << "File " << argv[1] << " opened, begin reading...";
        //while(in.peek() != EOF);
        while( in >> buffer ){
          if( flag == 0 ){
            size = buffer;
            flag = 1;
          } else {
            container.push_back(buffer);
          }        
        }
        in.close();
    }
    //cout << "...complete!" << endl << int(container.size()) << " values stored." << endl;
    cout << "Total value(s): "<< size << endl;
    lab11 selection( container, size );
    cout << "Stored value(s): ";
    selection.print_array( container, container.size() );
    cout << "Sorted value(s): ";
    selection.selection_sort( container, container.size() );
    selection.setArray(container);
    //selection.print_array( container, container.size() );

    cout << "Enter search item: ";
    cin >> key;
    lab11 linear(container, container.size(), key );
    if ( linear.linear_search(container, container.size(), key) != -1 ){
        cout << key << " found in array" << endl;
    } else {
        cout << key << " not found in array" << endl;
    }
    //std::vector<int> v = selection.getArray(); //get our sorted 'array'
    //std::vector<int> f;
    for(int64_t i : container){
        cout << "!" << i << " = " << selection.factorial(i) << endl;
        //int factorial = selection.factorial(i);
        //f.push_back(factorial);
        //cout << endl;
    }
    return 0;
}
