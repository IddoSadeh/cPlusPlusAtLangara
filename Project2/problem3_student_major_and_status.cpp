/* Project 2 - Problem #3 (4.21 in textbook) student major and status
problem3_student_major_and_status.cpp
description: in this program we will prompt the user to enter two characters and displays the major and status represented in the characters. The first
character indicates the major and the second is number character 1, 2, 3, 4, which
indicates whether a student is a freshman, sophomore, junior, or senior.
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
	char major;
	int studentYear;
	string out;

	cout << "please enter two characthers, the first(a letter) representing your major and the second (a number) your year. Please start by entering your major:  ";
	cin >> major;
	if (major < 123 && major>96) // we will automatically make lowercase letters into uppercase
	{
		major -= 32;
	}
	while (major != 'M' && major != 'I' && major != 'C')
	{
		cout << "invalid input, please try agian: ";
		cin >> major;
		if (major < 123 && major>96) // we will automatically make lowercase letters into uppercase
		{
			major -= 32;
		}
	}
	if (major == 'M')
	{
		out = "Mathematics";
	}
	else if (major == 'C')
	{
		out = "Computer Science";
	}
	else
	{
		out = "Information Technology";
	}
	cout << "Now enter student year: ";
	cin >> studentYear;

	while (studentYear < 1 || studentYear>4)
	{
		cout << "invalid input, please try agian: ";
		cin >> studentYear;
	}


	if (studentYear == 1)
	{
		cout << out + " Freshman";
	}
	else if (studentYear == 2)
	{
		cout << out + " Sophmore";
	}
	else if (studentYear == 3)
	{
		cout << out + " Junior";
	}
	else
	{
		cout << out + " Senior";
	}
}


