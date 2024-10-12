/*
 * Lab Week 13 - 1
 * Declare array of size 10, initialize all elements with random nums 20-50
 * Display all numbers, add 10 to second element in array
 * Author: Drew Elliott
 * Date: Nov 15, 2023
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));

    int array[10];

    for(int i = 0; i < 10; i++)
    {
        array[i] = rand() % 31 + 20;
        cout << array[i] << " ";
    }

    array[1] += 10;

    cout << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}