/* Project 1-Problem 8 pick card
 pick_card.cpp: description: This program outputs a radnom car from a deck of 52 cards
 Author: Iddo Sadeh Date: date*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> // here we include cmath to import the library which will let us usefunctions such as M_PI and pow
#include <iomanip> //here we import the library which includes functions such as setpercision() and fixed
#include <stdlib.h>  // here we import a library that lets us use the rand funciton
#include <ctime> // here we import a library that will let us use time() function
using namespace std;


int main()
{
	cout << "this program will generate a random card for you! press enter to see your card.";
	int card, suit;
	string suitResult;
	srand(time(0));
	card = rand() % 13 + 1;
	suit = rand() % 4 + 1;

	if (suit == 1)
		suitResult = " of hearts!";
	else if (suit == 2)
		suitResult = " of diamonds!";
	else if (suit == 3)
		suitResult = " of spades!";
	else if (suit == 4)
		suitResult = " of clubs!";

	if (card > 1 && card < 11)
	{
		cout << card << suitResult;
	}
	else if (card == 1)
	{
		cout << "Ace" << suitResult;
	}
	else if (card == 11)
	{
		cout << "Jack" << suitResult;
	}
	else if (card == 12)
	{
		cout << "Queen" << suitResult;
	}
	else if (card == 13)
	{
		cout << "King" << suitResult;
	}
	return 0;
}
