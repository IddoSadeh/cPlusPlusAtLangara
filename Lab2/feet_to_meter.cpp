// Lab 2-Problem 1 feet to meter//
// feet_to_meter.cpp: The program will take in a number in ft and output a conversion to meters.//
// Author: Iddo Sadeh Date: September 18, 2020//

#include <iostream>
using namespace std;
int main()
{
    double feet, meter; // declaring variables to be used to store values
    cout << "Please enter a value in feet and it will be converted to meters:   ";
    cin >> feet; // storing the value entered in the variable
    meter = feet * .305;//converting feet to meter and storing in variable "meter"
    cout << feet << " feet is equal to: " << meter << " meters " << endl; // If 1 foot has 12 inches so a input like 4"11' will not be processed properly. Yunke said its fine in breakout room.
    return 0;

}
