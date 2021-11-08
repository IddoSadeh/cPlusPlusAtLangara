/* Project 2 - Problem #9 (5.57 in the textbook) Check Student ID
problem9_check_student_id.cpp
description:  Write a program that prompts the student to enter a Student ID and displays valid Student ID if the rules are followed or invalid Student ID otherwise
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
	string num;
	int k = 0;
	cout << "Enter a ID, the program will check if its valid (ID needs to start with a number, have 10 digits and only consist of numbers or letter): ";
	getline(cin, num);

	if (num[0] < 48 && num[0]>57)
	{
		cout << "ID is invalid";
		return 0;
	}
	for (int i = 0; i < num.length(); i++)
	{
		if (num[i] >= 48 && num[i] <= 57 || num[i] >= 65 && num[i] <= 90 || num[i] >= 97 && num[i] <= 122)
		{
			k++;
		}
	}
	if (k != 10)
	{
		cout << "ID is invalid";
		return 0;
	}
	else
	{
		cout << "ID is valid!";
		return 0;
	}
}


