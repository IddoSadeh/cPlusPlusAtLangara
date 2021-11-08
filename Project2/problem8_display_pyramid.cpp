/* Project 2 - Problem #8 (5.19 in the textbook) Display pyramid
problem8_display_pyramid.cpp
description:  in this program we will prompt the user to enter an integer from 1 to 15 and display a pyramid with the top level with, second level with 2,1,2, third level with 3,2,1,2,3 and so on...
Author: Iddo Sadeh Date: October 14, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> /* here we include cmath to import the library which will let us usefunctions such as M_PI and pow*/
#include <iomanip> /*here we import the library which includes functions such as setpercision() and fixed*/
#include <stdlib.h>  // here we import a library that lets us use the rand funciton
#include <ctime> // here we import a library that will let us use time() function
#include<string> // here we import a library that will let us use functions such as getLine()
#include <fstream>// here we import a library which lets us read and write files


using namespace std;

int main()
{
	int pyr;
	cout << "please enter a number and we will output a special pyramid for you " << endl;
	cin >> pyr;

	for (int rows = 1; rows <= pyr; rows++) {
		// Create spaces in each row
		for (int s = pyr - rows; s >= 1; s--) {
			cout << "  ";
		}
		// Create decending numbers in each row
		for (int l = rows; l >= 2; l--) {
			cout << l << " ";
		}
		// Create ascending number in each row
		for (int r = 1; r <= rows; r++) {
			cout << r << " ";
		}
		cout << endl;
	}
}


