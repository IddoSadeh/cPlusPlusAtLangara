/* Project 2 - Problem #4 (4.23 in textbook) check SSN
problem4_check_SSN.cpp
description: in this program we will prompt the user to enter a SSN in the format, we will check if its valid
Author: Iddo Sadeh Date: October 12, 2020*/


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
	cout << "Enter a SSN  in the format ddd-dd-dddd, where d is a digit. and the program will check if its valid: ";
	cin >> num;
	if (num.length() == 11 && num[3] == '-' && num[6] == '-' && isdigit(num[0]) && isdigit(num[1]) && isdigit(num[2]) && isdigit(num[4]) && isdigit(num[5]) && isdigit(num[7]) && isdigit(num[8]) && isdigit(num[9]) && isdigit(num[10]))
		cout << num << " is a valid SSN";
	else
		cout << num << " is an invalid SSN";

}


