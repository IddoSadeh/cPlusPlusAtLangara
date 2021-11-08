/*Project 3-Problem # 2
estimate_pi.cpp
description: we will compute pi
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

double pi(double n)
{

    double fn = 0;
    double insideBrackets = 0;
    double b;
    while (n != 0)
    {
        b = 1 / (n * n);
        insideBrackets += b;
        n--;
    }
    fn = pow(6 * insideBrackets, 0.5);
    return fn;
}

int main()
{
    double n = 2;
    cout << "n" << "\t" << "f(n)" << endl;
    while (n < 22)
    {


        cout << n << "\t" << pi(n) << endl;

        n += 2;

    }


}

