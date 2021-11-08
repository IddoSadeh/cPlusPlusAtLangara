/* Project 2 - Problem #2 (4.19 in textbook) order three cities
problem2_order_three_cities.cpp
description: in this program we will prompt the user to enter three cities and display them in ascending order
Author: Iddo Sadeh Date: October 11, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> /* here we include cmath to import the library which will let us usefunctions such as M_PI and pow*/
#include <iomanip> /*here we import the library which includes functions such as setpercision() and fixed*/
#include <stdlib.h>  // here we import a library that lets us use the rand funciton
#include <ctime> // here we import a library that will let us use time() function
#include<string> // here we import a library that will let us use functions such as getLine()
#include <fstream>// here we import a library which lets us read and write files
#include <algorithm>    // std::sort
using namespace std;




int main()
{
	string cities[3];
	cout << "Please enter the name of three cities (please make sure first letters are uppercase), we will display them in ascending order" << endl;
	for (int a = 0; a < 3; a++)
	{
		int b = 0;
		cout << "Please enter city " << a + 1 << ": " << endl;; // we will assume user inputs valid city name
		getline(cin, cities[a]);
		if (cities[a][0] < 123 && cities[a][0]>96) // make sure city name starts with uppercase letter, if not change lowercase to uppercase
		{
			cities[a][0] -= 32;
		}

	}

	sort(cities, cities + 3);

	cout << "the cities you entered in ascending order are: " << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << cities[i] << endl;

	}

}
