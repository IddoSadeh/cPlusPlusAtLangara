/*Project 3-Problem # 6
credit_card.cpp
description: we will check validity of cc number
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

int getDigit(int number)
{

	if (number * 2 > 9)
	{
		return ((number * 2) / 10 + (number * 2) % 10);

	}
	else
	{
		return number * 2;
	}


}
int sumOfDoubleEvenPlace(const string& cardNumber)
{
	int num = 0;
	int sum = 0;
	for (int i = 0; i < cardNumber.length(); i = i + 2)
	{
		num = (cardNumber[i] - 48);
		sum += getDigit(num);

	}
	return sum;
}
int sumOfOddPlace(const string& cardNumber)
{
	int sum = 0;
	int num = 0;
	for (int i = 1; i < cardNumber.length(); i = i + 2)
	{
		num = (cardNumber[i] - 48);
		sum += num;
	}
	return sum;

}
bool startsWith(const string& cardNumber, const string& substr)
{
	int length = substr.length();
	for (int i = 0; i < length; i++)
	{
		if (cardNumber[i] != substr[i])
			return false;
	}
	return true;
}
bool isValid(const string& cardNumber)
{
	bool isPrefix;
	for (int i = 0; i < cardNumber.length(); i++) //checking that only digits were entered
	{

		if (cardNumber[i] != '1' && cardNumber[i] != '2' && cardNumber[i] != '3' && cardNumber[i] != '4' && cardNumber[i] != '5' && cardNumber[i] != '6' && cardNumber[i] != '7' && cardNumber[i] != '8' && cardNumber[i] != '9' && cardNumber[i] != '0' && cardNumber[i] != '/n')
		{

			return false;
		}

	}
	if (cardNumber[0] == '4')
	{
		isPrefix = startsWith(cardNumber, "4");
	}
	else if (cardNumber[0] == '5')
	{
		isPrefix = startsWith(cardNumber, "5");
	}
	else if (cardNumber[0] == '6')
	{
		isPrefix = startsWith(cardNumber, "6");
	}
	else if (cardNumber[0] == '3' && cardNumber[1] == '7')
	{
		isPrefix = startsWith(cardNumber, "37");
	}
	else
	{

		return false;
	}
	if (isPrefix && (sumOfDoubleEvenPlace(cardNumber) + sumOfOddPlace(cardNumber)) % 10 == 0)
	{
		return true;
	}
	else
	{

		return false;
	}

}

int main()
{
	string cInput;
	cout << "enter a credit card number to check for validity ";
	getline(cin, cInput);
	cInput.erase(remove_if(cInput.begin(), cInput.end(), isspace), cInput.end()); //remove spaces from input

	if (isValid(cInput))
		cout << "entry is valid";
	else
		cout << "entry is invalid";



}
