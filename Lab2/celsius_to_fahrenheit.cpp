// Lab 2-Problem 2 celsius to fahrenheit//
// celsius_to_fahrenheit.cpp: The program will take in a number in celsius and output a conversion to fahrenheit.//
// Author: Iddo Sadeh Date: September 18, 2020//

#include <iostream>

using namespace std;

int main()
{
    double celsius, fahrenheit; //declaring varibales of input and out
    cout << "Please enter a temperature in Celsius to get a conversion to Fahrenheit " << endl;
    cin >> celsius; // storing value of user to veriable celsius
    fahrenheit = (celsius * 9) / 5 + 32; // conversion
    cout << "the tempurature you inputed in Fahrenheit is :  " << fahrenheit << endl;
    return 0;

}

