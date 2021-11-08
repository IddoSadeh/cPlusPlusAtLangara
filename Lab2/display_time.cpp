// Lab 2-Problem 6 display time//
// display_time.cpp: The program will take in a number(seconds) and output the equivalant minutes//
// Author: Iddo Sadeh Date: September 18, 2020//

#include <iostream>

using namespace std;

int main()
{
    int sec, min, remain;
    cout << "this program will help you determine how many minutes equal a set amount of seconds.Please enter a number representing a number of seconds:  ";
    cin >> sec;
    min = sec / 60;
    remain = sec % 60;
    cout << sec << " is equivalent to " << min << " minutes and " << remain << " seconds";
    return 0;
}
