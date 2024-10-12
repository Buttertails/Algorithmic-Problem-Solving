/*
 * Lab Week 10 - 1
 * Display 1 - 100 with each line displaying 10 numbers
 * Author: Drew Elliott
 * Date: Oct 24, 2023
*/
#include<iostream>

using namespace std;

int main()
{
    int i = 1;

    while(i <= 100)
    {
        cout << i << " ";

        if(i % 10 == 0)
        {
            cout << "\n";
        }
        i++;
    }

    return 0;
}