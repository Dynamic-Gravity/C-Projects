#include <iostream>
#include <vector>
#include "functions.h"
using namespace std;

lab11::lab11(){

}
lab11::lab11( std::vector<int> array, int array_size ){

}
lab11::lab11( std::vector<int> array, int array_size, int search_item ){

}
lab11::~lab11(){

}


void lab11::setKey(int k){
	key = k;
}
void lab11::setArray(){

}

int lab11::getKey(){

}
std::vector<int>* lab11::getArray(){

}

void lab11::print_array( std::vector<int> array, int size ){
	cout << "stored values: ";
    for ( int i = 0; i < array.size(); i++ ){
      cout << array[i] << " ";
    }
    cout << endl << endl;
}

void lab11::selection_sort( std::vector<int> array, int array_size ){

}

int lab11::linear_search( std::vector<int> array, int array_size, int key ){
	for (int i = 0; i < array_size; i++){
		if (array[i] == key){
			return i;
		}
		return -1;
	}
}