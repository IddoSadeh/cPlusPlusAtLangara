/* Project 2 - Problem #1 (4.15 in textbook) Phone Key Pads
problem1_phone_key_pads.cpp
description: this program will use a function to return a number for a letter you input according to the The international standard letter/number mapping found on a telephone
Author: Iddo Sadeh Date: October 11, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> /* here we include cmath to import the library which will let us usefunctions such as M_PI and pow*/
#include <iomanip> /*here we import the library which includes functions such as setpercision() and fixed*/
#include <stdlib.h>  // here we import a library that lets us use the rand funciton
#include <ctime> // here we import a library that will let us use time() function
#include<string> // here we import a library that will let us use functions such as getLine()
#include <fstream>// here we import a library which lets us read and write files
using namespace std;

int whichNumber(char phone)
{
	switch (phone)
	{
	case 'A': case'B': case'C':
		return 2;
	case 'D': case 'E': case 'F':
		return 3;
	case 'G': case 'H': case 'I':
		return 4;
	case 'J': case 'K': case 'L':
		return 5;
	case 'M': case 'N': case 'O':
		return 6;
	case 'P': case 'Q': case 'R': case 'S':
		return 7;
	case 'T': case 'U': case 'V':
		return 8;
	case 'W': case 'X': case 'Y': case 'Z':
		return 9;

	}


}

int main()
{
	char letter;
	cout << "this program will return a number for a letter you input according to the The international standard letter/number mapping found on a telephone" << endl << "please input a letter ";
	cin >> letter;
	while (90 < letter && letter < 97 || letter > 122 || letter < 65)
	{
		cout << "The value you inputed is invalid, please try again: ";
		cin >> letter;
	}
	if (letter < 123 && letter>96) // to make code more efficient we will automatically make lowercase letters into uppercase
	{
		letter -= 32;
	}
	cout << "the number equilivant of the letter you entered is: " << whichNumber(letter);

}
