/*
 * Lab Week 15 - 3
 * Write a program to create an array with size 10 and initialize with random nums [50, 100]
 * Swap elements of the array
 * Author: Drew Elliott
 * Date: Nov 29, 2023
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    const int MAX = 10;
    int a[MAX], num, i, j = MAX - 1;
    srand(time(0));

    //Initialize array with random number 50-100
    for(int i = 0; i < MAX; i++)
    {
        a[i] = rand() % 51 + 50; 
    }

    //Display array
    for(i = 0; i < MAX; i++)
    {
        cout << a[i] << " ";
    }

    //Use i and j as pointers to reverse the array elements
    for(i = 0; i < MAX; i++)
    {
        num = a[i];
        a[i] = a[j];
        a[j] = num;
        
        if(i + 1 == j || i == j)
        {
            break;
        }
        j--;
    }

    cout << endl;

    //Display reversed array
    for(i = 0; i < MAX; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}