// Lab 2-Problem 4 cost of driving//
// cost_of_driving.cpp: The program will take in a a distance of a trip, a cars fuel efficiency, and the price per gallon of fuel. it'll output the cost of the trip//
// Author: Iddo Sadeh Date: September 18, 2020//

#include <iostream>
#include <iomanip>  // includes fixed and setpercision functions
using namespace std;


int main()
{
    double distance, fuelEff, gasPrice;
    cout << "This program will help you calculate the price of gas for a given trip. Please start by providing the total distance of the trip (in miles): ";
    cin >> distance;
    cout << "Please provide the fuel efficiency of the car you use in miles per gallon:  ";
    cin >> fuelEff;
    cout << "Please provide the cost of a gallon of gas:  ";
    cin >> gasPrice;
    double a = (distance * gasPrice) /fuelEff ;
    cout << fixed << setprecision(2) << a; //these 2 functions help us print the answer only up to a certain decimal point
    return 0;

}
