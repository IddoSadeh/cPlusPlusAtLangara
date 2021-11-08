/* Project 1-Problem 7 sort three integers
 sort_three_integers.cpp: description: i this program the user will enter three integers and the porgram will ouput them in decreasing order
 Author: Iddo Sadeh Date: date*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> // here we include cmath to import the library which will let us usefunctions such as M_PI and pow
#include <iomanip> //here we import the library which includes functions such as setpercision() and fixed

using namespace std;


int main()
{

	double a, b, c;
	cout << "in this program you can enter three integers and the porgram will print them out in decreasing order" << endl << "please enter the first integer: ";
	cin >> a;
	cout << "please enter the second integer: ";
	cin >> b;
	cout << "please enter the third integer: ";
	cin >> c;
	double biggestFirst[3] = { a, b, c };
	if (biggestFirst[2] > biggestFirst[0])
	{
		swap(biggestFirst[0], biggestFirst[2]);
	}
	else if (biggestFirst[1] > biggestFirst[0])
	{
		swap(biggestFirst[0], biggestFirst[1]);
	}
	else if (biggestFirst[2] > biggestFirst[1])
	{
		swap(biggestFirst[1], biggestFirst[2]);
	}
	cout << "the integars you entered in descending order are: " << biggestFirst[0] << " " << biggestFirst[1] << " " << biggestFirst[2];

	return 0;
}
