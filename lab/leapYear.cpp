/*
 * Lab Week 9 - 2
 * Determine if 4-digit number is a leap year
 * Author: Drew Elliott
 * Date: Oct 18, 2023
*/
#include<iostream>

//2023, 1800, 2010, 2000, 2008

using namespace std;

int main()
{
    int year;

    cout << "Enter a 4-digit for a year number: ";
    cin >> year;

    if(year % 100 == 0)
    {
        if(year % 400 == 0)
        {
            cout << year << " is a leap year!";
        }
        else
        {
            cout << year << " is not a leap year!";
        }
    }
    else
    {
        if(year % 4 == 0)
        {
            cout << year << " is a leap year!";
        }
        else
        {
            cout << year << " is not a leap year!";
        }
    }
    return 0;
}