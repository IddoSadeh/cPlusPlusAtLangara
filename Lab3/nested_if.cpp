/* Lab 3-Problem 2 nested if
nested_if.cpp:
description: in this project the user will input two integers and we will compare them. 
if they are equal we will print that the umbers are equal and end the porgram 
if they arent equal we will print the larger number and than check if the larger number is divisible by the smaller number and we will display a message accordingly
 Author: Iddo Sadeh Date: September 25, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> // here we include cmath to import the library which will let us usefunctions such as M_PI and pow
#include <iomanip> //here we import the library which includes functions such as setpercision() and fixed
#include <cstdlib>  // here we import a library that lets us use the rand funciton


using namespace std;
int main()
{
	int a, b;
	cout << "Please enter two integars and we will check if thy are equal, if they arent equal we will return the larger number and check if its divisble by the smaller one " << endl;
	cout << "Please enter the first integar: " << endl;
	cin >> a;
	cout << "Please enter the second integar: " << endl;
	cin >> b;
	if (a == b)
	{
		cout << "The numbers are equal";
		return 0;
	}
	else if (a > b)
	{
		cout << "the larger number is: " << a << endl;
		if (a % b == 0)
		{
			cout << a << " is divisible by " << b << endl;
			return 0;
		}
		else
		{
			cout << a << " isnt divisible by " << a << endl;
			return 0;
		}
	}
	else
	{
		cout << "the larger number is: " << b << endl;
		if (b % a == 0)
		{
			cout << b << " is divisible by " << a << endl;
			return 0;
		}
		else
		{
			cout << b << " isnt divisible by " << a << endl;
			return 0;
		}
	}
}
