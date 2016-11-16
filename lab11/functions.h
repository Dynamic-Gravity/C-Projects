/**
 * Luke Brown
 * CPSC 1020 003, F16
 * Lab 11
 * luke4@g.clemson.edu
 */
#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__
#include <vector>
class lab11
{
	private:
		int key;
		std::vector<int> array;
	public:
		lab11();
		lab11( std::vector<int>* array, int array_size );
		lab11( std::vector<int>* array, int array_size, int search_item );
		~lab11();
		void setKey(int key);
		void setArray();
		int getKey();
		std::vector<int>* getArray();
		void print_array( std::vector<int> a, int array_size );
		void selection_sort( std::vector<int> a, int array_size );
		int  linear_search( std::vector<int> a, int array_size, int search_item );
};
#endif
