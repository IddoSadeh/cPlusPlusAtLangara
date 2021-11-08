
/* Project 1-Problem 4 complex number
 complex_number.cpp: description: IN this program the user will enter two complex numbers and we will return the product
 Author: Iddo Sadeh Date: September 19, 2020*/

#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> // here we include cmath to import the library which will let us usefunctions such as M_PI and pow
#include <iomanip> //here we import the library which includes functions such as setpercision() and fixed

using namespace std;// Question for yunke: do we need to input as string and translate to double or is the way I did it ok


int main()
{
	double r1, i1, r2, i2, x, y;
	cout << "This program will help you multiply two complex numbers" << endl << "To start enter the real part of the first complex number: ";
	cin >> r1;
	cout << "Now please enter the imaginary part of the first complex number (without the 'i')";
	cin >> i1;

	cout << "Now enter the real part of the second complex number: ";
	cin >> r2;
	cout << "Now please enter the imaginary part of the second complex number (without the 'i')";
	cin >> i2;

	x = (r1 * r2) - (i1 * i2);
	y = (r1 * i2) + (i1 * r2);

	cout << "The product of the two complex numbers you entered is: " << x << " + " << y << "i";
	return 0;
}

