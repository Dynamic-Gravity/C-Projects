/*************************
 *Luke Brown
 *CPSC 1021 003, F16
 *Lab 3
 *luke4
 *************************/

#include <stdio.h>
#include <string.h>
#include "functions.h"

int main()
{
	arr = read_file();
	if ( checkRow(arr) || checkColumn(arr) || checkDiagonal(arr)  )
	{
		printf("We have a winner!\n");
	}
	else { printf("There does not seem to be a winnder!\n") }
	return 0;
}
