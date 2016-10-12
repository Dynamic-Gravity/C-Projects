#/**********************
#* Luke Brown          *
#* luke4@g.clemson.edu *
#* Section 003         *
#* Lab 6               *
#* 10-11-16            *
#**********************/
Date: date.cpp driver.cpp
	g++ -Wall date.cpp driver.cpp -o Date
run: Date
	./Date
clean:
	rm Date
	rm *.o
