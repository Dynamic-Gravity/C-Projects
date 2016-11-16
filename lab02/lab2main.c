/*************************
 *Luke Brown
 *CPSC 1021 003, F16
 *Lab 2
 *luke4
 *************************/


#include <stdio.h>
#include "lab2functions.h"

#define A_SIZE 20
#define SENT -1.0 /*sentinel*/

int main()
{
	double arr[A_SIZE] = {0.0};
	int count = 0;
	int *sizep = &count;
	
	fill_to_sentinel(A_SIZE, SENT, arr, sizep);
	printf("List of data values\n");
	
	for (count = 0; count < A_SIZE; count++)
	{
		printf("%13.3f\n",arr[count]);
	}
	return 0;
}
