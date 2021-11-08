/*Project 3-Problem # 8
substring.cpp
description: we will  check whether string s1 is a substring of string s2
Author: Iddo Sadeh Date: November 1, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> /* here we include cmath to import the library which will let us usefunctions such as M_PI and pow*/
#include <iomanip> /*here we import the library which includes functions such as setpercision() and fixed*/
#include <stdlib.h>  // here we import a library that lets us use the rand funciton
#include <ctime> // here we import a library that will let us use time() function
#include <string> // here we import a library that will let us use functions such as getLine()
#include <fstream> // here we import a library which lets us read and write files
using namespace std;

int indexOf(const string& s1, const string& s2)
{
	int counter = 1;
	int a = -1;
	bool istrue=true;
	for (int i = 0; i < s2.length(); i++)
	{
		if (s2[i] == s1[0])
		{
			
			for (int j = 1; j < s1.length(); j++)
			{
				if (s1[j] == s2[j + i])
				{
					counter++;
				}
				else
				{
					j = s1.length();
				}
				if (counter == s1.length())
				{
					a = i;
				}
			}

		}
		
	}
	
		return a;


}

int main()
{
	string s1, s2;
	cout << "Pleae enter first string "<<endl;
	getline(cin, s1);
	cout << "Please enter second string "<<endl;
	getline(cin, s2);
	cout << "indexOf(s1, s2) is "<< indexOf(s1, s2);
}
;