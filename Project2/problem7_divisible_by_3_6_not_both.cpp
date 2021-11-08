/* Project 2 - Problem #7 (5.13 in the textbook) Find numbers divisible by 3 or 6, but not both
problem7_divisible_by_3_6_not_both.cpp
description: this program will display all the numbers from 300 to 400, 5 per line, that are divisible by 3 or 6, but not both
Author: Iddo Sadeh Date: October 14, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> /* here we include cmath to import the library which will let us usefunctions such as M_PI and pow*/
#include <iomanip> /*here we import the library which includes functions such as setpercision() and fixed*/
#include <stdlib.h>  // here we import a library that lets us use the rand funciton
#include <ctime> // here we import a library that will let us use time() function
#include<string> // here we import a library that will let us use functions such as getLine()
#include <fstream>// here we import a library which lets us read and write files


using namespace std;

int main()
{
	int output = 300, counter = 0;
	while (output < 400)
	{

		if (output % 6 == 0)
		{
			output += 3;
		}
		else
		{
			cout << output << " ";
			output += 3;
			counter++;
		}

		if (counter >= 5 && counter % 5 == 0)
			cout << " \n";
	}

}


