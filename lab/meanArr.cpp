/*
 * Lab Week 13 - 2
 * Declare array of size 10, let user enter values for array and print values in reverse order
 * Find how many numbers in the array are greater than the mean value
 * Author: Drew Elliott
 * Date: Nov 15, 2023
*/
#include<iostream>

using namespace std;

int main()
{
    int array[10], sum = 0, greater = 0, less = 0;
    double mean;

    cout << "Enter ten numbers: ";

    for(int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    for(int i = 9; i >= 0; i--)
    {
        cout << array[i] << " ";
        sum += array[i]; 
    }

    mean = sum / 10.0;

    for(int i = 0; i < 10; i++)
    {
        if(array[i] > mean)
        {
            greater++;
        }
        else if (array[i] < mean)
        {
            less++;
        }
    }

    cout << "\nMean: " << mean << endl;
    cout << "Greater than: " << greater << endl;
    cout << "Less than: " << less << endl;


    return 0;
}