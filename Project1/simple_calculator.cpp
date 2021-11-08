/* Project 1-Problem 6 simple calculator
 simple_calculator.cpp: description: this program asks the user to input two integaers and an arithmetic operator and than outputs the result. the porgram also checks for invlaid operators and fiviosn by 0
 Author: Iddo Sadeh Date: date*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> // here we include cmath to import the library which will let us usefunctions such as M_PI and pow
#include <iomanip> //here we import the library which includes functions such as setpercision() and fixed

using namespace std;


int main()

{
	char op;
	double a, b;
	cout << "this program will help you calculate the sum, difference, product, or qoutient of two integars" << endl << "To start please enter the first integer: ";
	cin >> a;
	cout << "now, please enter the arithmetic operator";
	cin >> op;

	while (op != '+' && op != '-' && op != '*' && op != '/')
	{
		cout << "the operator you entered is invalid, please enter a different operator: ";
		cin >> op;
	}
	cout << "to finish, please enter the second integer: ";
	cin >> b;
	while (b == 0 && op == '/')
	{
		cout << "cannot divide by 0, please enter a different number to divide by: ";
		cin >> b;
	}

	if (b != 0 && op == '/') // should I use switch case? setpercision?
	{
		cout << a << op << b << '=' << a / b;
	}
	else if (op == '*')
	{
		cout << a << op << b << '=' << a * b;
	}
	else if (op == '+')
	{
		cout << a << op << b << '=' << a + b;
	}
	else if (op == '-')
	{
		cout << a << op << b << '=' << a - b;
	}
	return 0;
}
