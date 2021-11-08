/* Project 1-Problem 2 swimming pool
 swimming+pool.cpp: The user will enter how many large and small pumps are used to fill a pool. 
 We will display how many hours it will take to fill the swimming pool with the specified numbers of pumps.
 We were given the following data for the rate of each pump:
 Two large and 1 small pump can fill a swimming pool in 4 hours. One large and 3 small pumps can also fill the same swimming pool in 4 hours.
 Frome this data we derived the following:
 when (x = rate of large pump
	   y = rate of small pump)

 2x + y = 4
 x + 3y = 4
 5y=4
 y=0.8h -> out of 4 hours it takes to fill pool 0.8 hours of work was done by small pump -> 5 small pumps can fill a pool in 4 hours ->  a small pump can fill a pool in 20 hours solo
 x = 1.6 h  -> large pumps are twice as strong -> in 10 hours the pump will fill up a pool solo
 x = rate of large pump = 1 pool  10 hours
 y = rate of small pump = 1 pool per 20 hours

 therefore the equation we will use will be for the amount of time needed:
 (x*0.1 + y*0.05)^-1

 Author: Iddo Sadeh Date: September 18, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> // here we include cmath to import the library which will let us usefunctions such as M_PI and pow
#include <iomanip> //here we import the library which includes functions such as setpercision() and fixed

using namespace std;


int main()
{
	int small, large; // we use int because number of pumps can only be integars
	cout << "this program will help you figure out how fast you can fill up a pool with a given amount of pumps" << endl << "please enter the amount of small pumps you will be using:" << endl;
	cin >> small;
	cout << "please enter the amount of large pumps you will using:" << endl;
	cin >> large;
	cout << "the amount of time it will take to fill up a pool with the number of pumps you plan on using is: " << fixed << setprecision(2) << pow((large * 0.1 + small * 0.05), -1) << " hours";

	return 0;
}
