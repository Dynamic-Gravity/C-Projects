/**********************
* Luke Brown          *
* luke4@g.clemson.edu *
* Section 003         *
* Lab 4               *
* 09-12-16            *
**********************/

void convertInches(int m, int *y, int *f, int *i ) {
	int *iptr = i, *yptr = y, *fptr = f;
	*yptr = m/36;
	*fptr = (m % 36)/12;
	*iptr = ((m % 36)%12);
}
