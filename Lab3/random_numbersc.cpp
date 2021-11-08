/*  Lab 3-Problem 1c random numbers
random_numbersc.cpp: description: in this part of the program lwe will add srand(time(0)) to the program to see the difference in output
 Author: Iddo Sadeh Date: September 25, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> // here we include cmath to import the library which will let us usefunctions such as M_PI and pow
#include <iomanip> //here we import the library which includes functions such as setpercision() and fixed
#include <cstdlib>  // here we import a library that lets us use the rand funciton
#include <ctime> //here we include the library that lets us use time(0) function

using namespace std;
int main()
{
	srand(time(0));
	int i = rand();
	cout << i << endl;
	return 0;

}

