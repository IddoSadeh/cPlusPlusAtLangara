/* Lab 8
 iddoSadeh_Lab8.cpp description: in this lab we will practice with writing functions to sort. we use binary sort, selection sort and recursion. we will also use a timer to test these functions
 Author: Iddo Sadeh Date: November 6, 2020*/
#include <iostream>
#include <cmath> /* here we include cmath to import the library which will let us usefunctions such as M_PI and pow*/
#include <iomanip> /*here we import the library which includes functions such as setpercision() and fixed*/
#include <stdlib.h>  // here we import a library that lets us use the rand funciton
#include <ctime> // here we import a library that will let us use time() function
#include<string> // here we import a library that will let us use functions such as getLine()
#include <fstream>// here we import a library which lets us read and write files


using namespace std;
void selectionSort(int list[], int listSize) //question 1
{
    int  min;

    for (int i = 0; i < listSize - 1; i++)
    {
         
        min = i;
        for (int j = i + 1; j < listSize; j++)
            if (list[j] < list[min])
                min = j;

        int temp = list[min];
        list[min] = list[i];
        list[i] = temp;
        
    }
}
int binarySearch(const int list[], int key, int listSize) // question 2
{
    int low = 0;
    int high = listSize - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;
         if (key == list[mid])
            return mid;
         else if (key < list[mid])
            high = mid - 1;
         else
            low = mid + 1;
    }

    return - 1;
}
int indexOfSmallest(int list[], int size) //question 6
{
    int temp1=0;
    for (int i = 1; i < size; i++)
    {
        if (list[i] <= list[temp1])
        {
            temp1 = i;
        }
    }
    return temp1;
}
void recursiveSelectionSort(int list[], int n) //question 6
{
    int j = 0;
    if (n > 0)
    {
        j = indexOfSmallest(list, n);
        swap(list[0], list[j]);
        recursiveSelectionSort(list + 1, n - 1);
    }
}

int main() //answers for question 3 uncommented by default, all else commented
{
    
    srand(time(NULL));
    const int MAX = 100;
    const int MAX5 = 40000;
    const int MAX6 = 100;
    int myData[MAX], myData5[MAX5] , myData6[MAX6];
    //question 3
    cout << "question 3 array" << endl;
    for (int i = 0; i < MAX; i++) 
    {
        myData[i] = rand()%100;
        cout << myData[i]<<" ";

    }
   
    cout << endl;
   
    selectionSort(myData, MAX); 
    cout << "question 3 sorted array" << endl;
   for (int j = 0; j < MAX; j++) 
    {
       cout << myData[j]<<" ";
    }
    cout << endl << "question 4 time" << endl;
    
    //question4
    long startTime = time(0);      //1s for 30000, 4s for 60000, 14s for 120000 [for fun]
    selectionSort(myData, MAX);// [for fun]
    long endTime = time(0);
    long executionTime = endTime - startTime;
    cout << executionTime <<  endl;

   //question 5 
    for (int i = 0; i < MAX5; i++) 
    {
        myData5[i] = i+1;
    }
  
    cout <<  "question 5 time" << endl;
    startTime = time(0);      //2s for 30000, 7s for 60000, 26s for 120000 [for fun]
    binarySearch(myData5, 41000,MAX5);
    endTime = time(0);
    executionTime = endTime - startTime;
  
    cout << executionTime << endl;

    //question 6
    cout << "question 6 array" << endl;
    for (int i = 0; i < MAX6; i++) 
    {
        myData6[i] = rand() % 100;
        cout << myData6[i] << " ";

    }

    cout << endl << "question 6 sorted array" << endl;
    recursiveSelectionSort(myData6, MAX6); 
    for (int j = 0; j < MAX6; j++)
    {
        cout << myData6[j] << " ";
    }

     

}

