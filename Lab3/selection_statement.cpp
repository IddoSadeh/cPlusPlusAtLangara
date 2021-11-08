/* Lab 3-Problem 3 selection statement
selection_statement.cpp: description: the porgram will ask users to enter a grade (A,B,C,D,F) and prints a message accordingly
 Author: Iddo Sadeh Date: September 25, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> // here we include cmath to import the library which will let us usefunctions such as M_PI and pow
#include <iomanip> //here we import the library which includes functions such as setpercision() and fixed
#include <cstdlib>  // here we import a library that lets us use the rand funciton


using namespace std;
int main()
{
	char grade;
	cout << "this program will help me give you feedback according to your grade" << endl;
	cout << "please enter your grade (uppercase)" << endl;
	cin >> grade;
	while (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F')
	{
		cout << "input invalid, try again please" << endl;
		cin >> grade;
	}
	if (grade == 'A')
	{
		cout << "Excellent Job!";
	}
	else if (grade == 'B')
	{
		cout << "Good Job";
	}
	else if (grade == 'C')
	{
		cout << "Not Bad, almost good";
	}
	else if (grade == 'D')
	{
		cout << "Don't give up!";
	}
	else if (grade == 'F')
	{
		cout << "Please see me after class";
	}
	return 0;
}
