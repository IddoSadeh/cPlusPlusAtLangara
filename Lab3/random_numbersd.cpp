/*  Lab 3-Problem 1d random numbers
random_numbersd.cpp: description: in this part of the program we will simulate a coin flip  - 0 for head 1 for tail
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
	int coin = rand() % 2;
	if (coin == 1)
		cout << "tails" << endl;
	else
		cout << "heads" << endl;
	return 0;

}

