/*  Lab 3-Problem 1b random numbers
random_numbersb.cpp: description: in this part of the program we will write a program that will print the value of RAND_MAX
 Author: Iddo Sadeh Date: September 25, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> // here we include cmath to import the library which will let us usefunctions such as M_PI and pow
#include <iomanip> //here we import the library which includes functions such as setpercision() and fixed
#include <cstdlib>  // here we import a library that lets us use the rand funciton


using namespace std;
int main()
{
	cout << RAND_MAX << endl;
	return 0;

}
