//-------------------------------------------------------------------------
// Lab 1-A: Getting Started with C++
// printHello.cpp: The program prints Hello World! then Hello Again.
//
// Author:Iddo Sadeh, 5195         Date: 09/11/2020
//--------------------------------------------------------------------------
#include <iostream> // commenting out this line causes "build error"
using namespace std;

int main() {
	// This program outputs 2 messages
	cout << "Hello World!" << endl;
	cout << "Hello Again." << endl;
	system("pause");
	return 0;                 	// Return to OS and indicate no errors
} // End main
