/* Project 2 - Problem #6 (5.5 in the textbook) Conversion from millimeters to inches and inches to millimeters
problem6_conversion_from_millimeters_to_inches_and_inches_to_millimeters.cpp
description: this program will display two tables of millimiter to inches conversion side by side
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
	double inches, millimeters;
	int m = 2, i;
	cout << "conversion from millimeters to inches and inches to millimeters" << endl;
	cout << "millimeters      inches  |inches milimeters" << endl;
	while (m < 102)
	{

		for (i = 1; i < 51; i++)
		{
			cout << m << "\t";
			inches = 0.039 * m;
			cout << "\t " << fixed << setprecision(3) << inches << "\t |";
			m += 2;
			cout << i;
			millimeters = i / 0.039;
			cout << "\t " << fixed << setprecision(3) << millimeters << endl;

		}
	}

}
