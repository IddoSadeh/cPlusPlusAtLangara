/*Project 3-Problem # 3
twin_primes.cpp
description: this program will print twin primes
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
void twinPrimes()
{
    for (int i = 0; i < 1000; i++)
    {
        if (isPrime(i) && isPrime(i + 2))
        {
            cout << "(" << i << "," << i + 2 << ")" << endl;
        }
    }
}

int main()
{
 
    twinPrimes();

}
