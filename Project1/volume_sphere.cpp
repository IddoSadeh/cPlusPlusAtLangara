/* Project 1-Problem 1 volume sphere
 Volume_sphere.cpp: The program will calculate and display the volume of a sphere, The program should prompt the user to enter the radius of the sphere.  We assume the input is positive.
 Author: Iddo Sadeh Date: September 18, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> // here we include cmath to import the library which will let us use M_PI and pow
#include <iomanip> //here we import the library which includes functions setpercision() and fixed

using namespace std;


int main()
{
	double radius, volume;
	cout << " This program will help you calculate the volume of a sphere." << endl << "Please enter a value representing the radius of the sphere you would like to find the volume of: ";
	cin >> radius;
	volume = 4 * M_PI * pow(radius, 3)/3;
	cout << fixed << setprecision(2) << volume;
	
	return 0; 
}


