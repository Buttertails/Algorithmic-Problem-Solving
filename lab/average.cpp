/*
 * Lab Week 10 - 2
 * Prompt user to enter 10 numbers and display the average 
 * Author: Drew Elliott
 * Date: Oct 24, 2023
*/
#include<iostream>

using namespace std;

/*
Write a program to let the user 10 values, and then calculate the average
value.
*/

int main()
{
    double total = 0, i = 0, num; 

    while(i < 10)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        total += num;
        i++;
    }

    cout << "Average: " << (total / i) << endl;

    return 0;
}