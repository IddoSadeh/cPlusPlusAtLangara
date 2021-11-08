/* Lab 7-Problem #1 
 .cpp description: 
 Author: Iddo Sadeh Date: October 29, 2020*/
#include <iostream>
#include <cmath> /* here we include cmath to import the library which will let us usefunctions such as M_PI and pow*/
#include <iomanip> /*here we import the library which includes functions such as setpercision() and fixed*/
#include <stdlib.h>  // here we import a library that lets us use the rand funciton
#include <ctime> // here we import a library that will let us use time() function
#include<string> // here we import a library that will let us use functions such as getLine()
#include <fstream>// here we import a library which lets us read and write files

using namespace std;

const int SIZE = 10; 

void initializeArray(int a[])
{
	for (int i = 0; i < SIZE; i++) {
		a[i] = rand() % SIZE; 
	}
}
void printArray(int b[]) { 
	for (int i = 0; i < SIZE; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
}
int largestElement(int c[])
{
	int max = c[0];
	for (int i = 1; i < SIZE; i++) {
		if (c[i] > max)
			max = c[i];
	}
	return max;
}
int smallestIndex(int d[]) 
{
	int largest = largestElement(d);

	for (int i = 0; i < SIZE; i++) {
		if (d[i] == largest)
		return i;
	}
}
int largestIndex(int d[]) 
{
	int largest = largestElement(d);

	for (int i = SIZE-1; i >-1; i--) {
		if (d[i] == largest)
			return i;
	}
}
void shiftLeft(int e[]) 
{
	int newArr[SIZE];
	int left = e[0];
	for (int i = 0; i <SIZE - 1; i++) {
		newArr[i] = e[i + 1];
	}
	newArr[SIZE - 1] = left;

	printArray(newArr);
}
void shiftRight(int f[])
{
	
	int right = f[SIZE-1];
	for (int i = SIZE; i >= 0; i--) {
		f[i-1] = f[i-2];
	}
	f[0] = right;

	printArray(f);
}
int searchArray(int g[], int h) {
	for (int i = 0; i < SIZE; i++) {
		if (g[i] == h)
			return i;
	}
	return -1;
}

int main()
{
	srand(time(NULL));
	int myList[SIZE];
	initializeArray(myList);
	printArray(myList);
	cout << largestElement(myList) << endl;
	cout << smallestIndex(myList) << endl;
	cout << largestIndex(myList) << endl; // more meat?
	shiftLeft(myList);
	shiftRight(myList);
	int randNumber = rand() % 20;
	int receivedValue = searchArray(myList, randNumber);
	if (receivedValue == -1) {
		cout << randNumber << " not found in myList\n";
	}
	else {
		cout << randNumber << " found in myList at index " << receivedValue;
	}
	return 0;
}

