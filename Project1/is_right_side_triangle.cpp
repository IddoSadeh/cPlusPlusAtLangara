/* Project 1-Problem 5 is right side triangle
 is_right_side_triangle.cpp: description: this program will help determine whether a triangle has a right angle or not. the use will input the size of the 3 edges of the triangle and the program will output whether they make up a right triangle
 Author: Iddo Sadeh Date: September 20, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> // here we include cmath to import the library which will let us usefunctions such as M_PI and pow
#include <iomanip> //here we import the library which includes functions such as setpercision() and fixed

using namespace std;


int main()
{
	double a, b, c;
	cout << "this program will help you decipher whether 3 positive real numbers can represent the sizes of the three edges of a right triangle:" << endl << "please enter the first number:";
	cin >> a;
	while (a <= 0)
	{
		cout << "the number you entered is either smaller or equal to 0. Please enter a new number: ";
		cin >> a;
	}
	cout << "please enter the second number:";
	cin >> b;
	while (b <= 0)
	{
		cout << "the number you entered is either smaller or equal to 0. Please enter a new number: ";
		cin >> b;
	}
	cout << "please enter the third number:";
	cin >> c;
	while (c <= 0)
	{
		cout << "the number you entered is either smaller or equal to 0. Please enter a new number: ";
		cin >> c;
	}
	if ((pow(a, 2) == pow(b, 2) + pow(c, 2)) || (pow(b, 2) == pow(a, 2) + pow(c, 2)) || (pow(c, 2) == pow(b, 2) + pow(a, 2))) // okay to use pyhtagors?
	{
		cout << "the triangle with edges the size of " << a << " " << b << " " << c << " is a right triangle";
	}
	else
	{

		cout << "the triangle with edges the size of " << a << " " << b << " " << c << " is not a right triangle";
	}

	return 0;
}
