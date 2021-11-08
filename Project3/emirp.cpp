/*Project 3-Problem # 4
emirp.cpp
description: this program will print out nonpalindromic prime numbers whose reversal is also a prime
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
bool isPrime(int n)
{
    bool a;
    if (n == 0 || n == 1) {
        return false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                return false;

            }
        }
    }
    return true;
}
int main()
{
    int c = 100;
    for (int i = 0; c > 0; i++)
    {
        if (isPrime(i) && isPalindrome(i) == 0 && isPrime(reverse(i)))
        {
            c--;
            cout << i << endl;
        }
    }
}
