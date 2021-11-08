/*Project 3-Problem # 7
decimal_to_binary.cpp
description: we will parse a decimal number into a binary number as a string
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

string dec2Bin(unsigned dec) {
    string bin;
    while (dec > 0) {
        if (dec % 2 == 0) {
            bin = "0" + bin;
        }
        else {
            bin = "1" + bin;
        }
        dec /= 2;
    }
    return bin;
}

int main()
{
    int a;
    cout << "enter a number to find out its binary form";
    cin >> a;
    cout << dec2Bin(a);
}
