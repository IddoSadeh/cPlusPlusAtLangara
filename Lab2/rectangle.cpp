// Lab 2-Problem 3 rectangle//
// rectangle.cpp: The program will take in 2 numbers which represent the width and height of a rectangle and outputs the perimeter and area of the rectangle//
// Author: Iddo Sadeh Date: September 18, 2020//

#include <iostream>

using namespace std;


int main()
{
    double height, width, area, perimeter; // declaring variables
    cout << "This program will help you calculate the area and perimeter of a given rectangle, please start by providing the hegiht of your rectangle "; // instructing user of the purpose of the program
    cin >> height;
    cout << " Please provide the width of your rectangle: ";
    cin >> width;
    area = height * width;
    perimeter = (height + width) * 2;
    cout << "the area of your rectangle is " << area << " and the permieter of your rectangle is " << perimeter << endl;
    return 0;



}

