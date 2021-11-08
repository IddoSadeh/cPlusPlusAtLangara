/*Project 3-Problem # 1
palindrome_integer.cpp
description: we will write 2 functions, one that returns the revers of an input integer and the second checks if the integer is a palindrome using the first function
Author: Iddo Sadeh Date: November 1, 2020*/


#define _USE_MATH_DEFINES // here we declares a preprocessor macro to allow us to include math constants
#include <iostream>
#include <cmath> /* here we include cmath to import the library which will let us usefunctions such as M_PI and pow*/
#include <iomanip> /*here we import the library which includes functions such as setpercision() and fixed*/
#include <stdlib.h>  // here we import a library that lets us use the rand funciton
#include <ctime> // here we import a library that will let us use time() function
#include <string> // here we import a library that will let us use functions such as getLine()
#include <fstream>// here we import a library which lets us read and write files
using namespace std;

int reverse(int orgInt) {
    int newInt = 0;
    if (orgInt == 0)
        return 0;
    while (orgInt != 0) {
        newInt = newInt * 10 + orgInt % 10;
        orgInt = orgInt / 10;
    }

    return newInt;
}
bool isPalindrome(int orgInt)
{
    if (orgInt == reverse(orgInt))
    {
        return true;
    }
    return false;
}

int main()
{
    int a;
    cout << "enter a number to find out if it is a palindrome "<< endl;
    cin >> a;
    if (isPalindrome(a))
        cout << "your number is a palindrome";
    else
        cout << "your number is not a palindrome";

}