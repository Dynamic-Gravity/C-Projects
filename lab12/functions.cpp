#include <iostream>
#include <vector>
#include "functions.h"

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

int lab11::getKey(){
	return key;
}
std::vector<int> lab11::getArray(){
	return array;
}

void lab11::setArray(std::vector<int> a){
	array = a;
}

void lab11::print_array( std::vector<int> array, int size ){
    for ( unsigned i = 0; i < array.size(); i++ ){
      std::cout << array[i] << " ";
    }
    std::cout << std::endl << std::endl;
}

void lab11::selection_sort( std::vector<int> array, int array_size ){
	int i, j, min, temp;
	for (i = 0; i < array_size-1; i++){
		min = i;
		for (j= i+1; j < array_size; j++){
			if (array[j] < array[min]){
				min = j;
			}
		}
		if (min != i){
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
	}
	for (int k = 0; k < array_size; k++){
		std::cout << array[k] << " ";
	}
	std:: cout << std::endl;
}

int lab11::linear_search( std::vector<int> array, int array_size, int key ){
	for (int i = 0; i < array_size; i++){
		if (array[i] == key){
			return i;
		}
	}
	return -1;
}

int64_t lab11::factorial(int64_t n){
	if(n <= 1){
		return 1;
	} else {
		int64_t tmp = n * factorial(n-1);
		return tmp;
	}
}