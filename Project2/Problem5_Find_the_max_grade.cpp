/* Project 2 - Problem #5 Find the max grade
problem5_find_the_max_grade.cpp
description: Write a C++ program that receives the grades for an unspecified number of students from a text file. The program finds and displays the maximum grade
Author: Iddo Sadeh Date: October 17, 2020*/


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
	int a=0;
	int b=0;
	string c = "The values read from the text file: ";
	ifstream input("grades.txt");
	while (!input.eof())
	{

		input >> a;
		c += to_string(a);
		if (a > b)
		{
			b = a;


		}
	}


	cout << c << b;
	
}

