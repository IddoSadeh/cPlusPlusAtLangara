/* Lab 9 2D Arrays
 iddoSadeh_Lab9.cpp 
 description: we will declare a 2D array and write function to get familiar with 2D arrays
 Author: Iddo Sadeh Date: November 26, 2020 */


#include <iostream>
#include <cmath> /* here we include cmath to import the library which will let us usefunctions such as M_PI and pow*/
#include <iomanip> /*here we import the library which includes functions such as setpercision() and fixed*/
#include <stdlib.h>  // here we import a library that lets us use the rand funciton
#include <ctime> // here we import a library that will let us use time() function
#include<string> // here we import a library that will let us use functions such as getLine()
#include <fstream>// here we import a library which lets us read and write files


using namespace std;
void initialize(int arr[][10])
{
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
}
void display(int arr[][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
int sum(int arr[][10])
{
    int temp = 0;
    
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                temp += arr[i][j];
            }
            
        }
        return temp;
}
int sumDiagonal(int arr[][10])
{
    int temp = 0, i =0, j=0;
    while (i < 10 && j < 10)
    {
        temp += arr[i][j];
        i++;
        j++;
    }
    return temp;
    
}
int sumColumn(int arr[][10], int col)
{
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        temp += arr[i][col];
    }
    return temp;
}
int largestSum(int arr[][10])
{
    int largest[2] = { 0,0 }; // will hold in first index the row with the largest csum and the second the sum
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            temp += arr[i][j];
        }
        if (largest[1] < temp )
        {
            largest[0] = i;
            largest[1] = temp;
            
        }
        temp = 0;
    }
    return (largest[0] +1);
}
void transpose(int arr[][10])
{
    int temparr[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            temparr[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = temparr[i][j];
        }
    }
}

int main()
{
    const int ROW_SIZE = 10;
    const int COLUMN_SIZE = 10;
    int myMatrix[ROW_SIZE][COLUMN_SIZE];
    initialize(myMatrix);
    display(myMatrix);
    cout << endl << "the sum of all the the elements is: " << sum(myMatrix);
    cout << endl << "the sum of all the the elements in the major diagnol is: " << sumDiagonal(myMatrix);
    cout << endl << "the sum of the last column is: " << sumColumn(myMatrix, 9);
    cout << endl << "the " << largestSum(myMatrix) << "th row has the largest sum";
    transpose(myMatrix);
    cout << endl<< "the matrix transposed is: "<< endl;
    display(myMatrix);
}


