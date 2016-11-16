/*************************
 *Luke Brown
 *CPSC 1021 003, F16
 *Lab 2
 *luke4
 *************************/

#include <stdio.h>
#include "lab2functions.h"

void fill_to_sentinel(int dbl_max, double sentinel, double dbl_arr[], int *dbl_sizep)
{
	double in = 0.0;
	int read_count = 0;
	int success = 1;
	while(1)
	{
		/*scan in one line at a time from file*/
		success = scanf("%lf", &in);
		
		/*check for sentinel*/
		if (in == sentinel)
		{
			return;
		}	
		else
		{
			/*check if we hit EOF w/o sentinel*/
			if (success == EOF)
			{
				printf("***Error in data format***\n");
                       		printf("***Using first %d data values***\n", read_count);
				return;
			}
			/*check if we hit max size*/
                        else if (read_count < dbl_max)
                        {
                                dbl_arr[read_count] = in;
                                read_count++;
                        }

			/*we hit max*/
			else
			{
				printf("***Excess data***\n");
                        	printf("***Using first %d data values***\n", read_count);
				return;
			}		
		}
		/*set count*/		
		*dbl_sizep = read_count;
	}
}
