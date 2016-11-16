#/**********************
#* Luke Brown          *
#* CPSC 1020 003, F16  *
#* PA2                 *
#* luke4@g.clemson.edu *
#* 10-26-16            *
#**********************/
all: ./*.cpp
	g++ -Wall *.cpp -o run -std=c++11
run: all
	./run input1.txt
	./run input2.txt
clean:
	rm run || rm *.o