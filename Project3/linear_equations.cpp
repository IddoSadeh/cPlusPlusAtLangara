/*Project 3-Problem # 5
linear_equations.cpp
description:  use Cramer’s rule to solve the linear equations
Author: Iddo Sadeh Date: November 1, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> /* here we include cmath to import the library which will let us usefunctions such as M_PI and pow*/
#include <iomanip> /*here we import the library which includes functions such as setpercision() and fixed*/
#include <stdlib.h>  // here we import a library that lets us use the rand funciton
#include <ctime> // here we import a library that will let us use time() function
#include <string> // here we import a library that will let us use functions such as getLine()
#include <fstream>// here we import a library which lets us read and write files
using namespace std;

void solveEquation(double a, double b, double c, double d,
	double e, double f, double& x, double& y, bool& isSolvable)
{

	if (a * d - b * c != 0)
	{
		x = (e * d - b * f) / (a * d - b * c);
		y = (a * f - e * c) / (a * d - b * c);

	}
	else
		isSolvable = 0;
}

int main()
{
	double a, b, c, d, e, f, x, y;
	bool isSolvable;
	cout << "You can use Cramer’s rule to solve the following 2 * 2 system of linear equations :" << endl << "ax + by = e" << endl << "cx + dy = f" << endl;
	cout << "please enter a, b, c, d, e, f and we will solve the equation with Cramer's Rule" << endl;
	cout << "a is: " << endl;
	cin >> a;
	cout << "b is: " << endl;
	cin >> b;
	cout << "c is: " << endl;
	cin >> c;
	cout << "d is: " << endl;
	cin >> d;
	cout << "e is: " << endl;
	cin >> e;
	cout << "f is: " << endl;
	cin >> f;

	solveEquation(a, b, c, d, e, f, x, y, isSolvable);
	if (isSolvable == 0)
	{
		cout << "The equation has no solution.";
	}
	else
	{
		cout << "x is " << x;
		cout << " and y is " << y;
	}

}