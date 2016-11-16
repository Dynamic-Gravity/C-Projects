/*************************
 *Luke Brown
 *CPSC 1021 003, F16
 *Lab 3
 *luke4
 *************************/

#define SIZE 3

/*checks all column positions*/
int checkColumn(char arr[][])
{
	/*check first column*/
	if ( strcmp(arr[0][0], arr[1][0]) && strcmp(arr[1][0], arr[2][0]) ) { return true; }
	/*check second column*/
	else if ( strcmp(arr[1][1], arr[2][1]) && strcmp(arr[2][1], arr[3][1]) ) { return true; }
	/*check third column*/
	else if ( strcmp(arr[1][2], arr[2][2]) && strcmp(arr[2][2], arr[3][2]) ) { return true; }
	/*no columns are equal*/
	else { return false; }
}

/*checks all row positions*/
int checkRow(char arr[][])
{
	/*check first row*/
	if ( strcmp(arr[0][0],arr[0][1]) && strcmp(arr[0][1],arr[0][3]) ) { return true; }
	/*check second row*/
	if ( strcmp(arr[1][0],arr[1][1]) && strcmp(arr[1][1],arr[1][3]) ) { return true; }
	/*check third row*/
	if ( strcmp(arr[2][0],arr[2][1]) && strcmp(arr[2][1],arr[2][3]) ) { return true; }
	/*no rows are equal*/
	else { return false; }

}

/*checks all diagonal positions*/
int checkDiagonal(char arr[][])
{
	/*check first diagonal*/
	if ( strcmp(arr[0][0],arr[1][1]) && strcmp(arr[1][1],arr[2][2]) ) { return true; }
	/*check other diagonal*/
	else if ( strcmp(arr[0][2],arr[1][1]) && strcmp(arr[1][1],arr[2][0]) ) { return true; }
	/*no diagonals are equal*/
	else { return false; }
}

/*reads from the input file*/
char read_file()
{
	int fail_flag, loop = 1;
	int i = 0;
	char in[SIZE] = "";
	while(loop)
	{
		for (i=0; i< SIZE; i++)
		{
			/*read in our data and check for failure*/
			fail_flag = scanf(" %c", &in[i]);
			
			/*if we hit the end, exit*/
			if (fail_flag == EOF) { loop = 0; } 
		}
	}
}
