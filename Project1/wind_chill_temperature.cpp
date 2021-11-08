/* Project 1-Problem 3 wind chill temperature
 wind_chill_tempurature.cpp: description: In this porgram we will help the user get a value for thhe answer "how cold is it?". the use will input the temparture and wind speed and we will output the wind chill.
 Author: Iddo Sadeh Date: September 19, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> // here we include cmath to import the library which will let us usefunctions such as M_PI and pow
#include <iomanip> //here we import the library which includes functions such as setpercision() and fixed

using namespace std;


int main()
{
	double temp, wspeed, wchill;
	cout << "this program will help you understand what the temparature with wind chill is at any given moment" << endl << "please enter the temperature in Farenheit (temperature needs to be between -58 F and 41F):";
	cin >> temp;
	while (temp < -58 || temp >41)
	{
		cout << " the temparature you entered is not within the defined range, Please enter a different temperature that is greater than -58 F and smaller than 41 F:";
		cin >> temp;
	}
	cout << "please enter the wind speed in miles per hour( wind speed needs to ber greater than 2 m/h):";
	cin >> wspeed;
	while (wspeed < 2)
	{
		cout << " the wind speed you entered is not in the defined range, please enter a different wind speed greater than 2 m/h: ";
		cin >> wspeed;
	}
	wchill = 35.74 + 0.6215 * temp - 35.75 * pow(wspeed, 0.16) + 0.4275 * temp * pow(wspeed, 0.16);
	cout << "the temparature with wind chill given the data you gave is :" << fixed << setprecision(2) << wchill;

	return 0;
}
