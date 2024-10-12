/*
 * Lab Week 15 - 1
 * Write a program that finds the gcd of two integers from user input.
 * Author: Drew Elliott
 * Date: Nov 29, 2023
*/
#include<iostream>

using namespace std;

int main()
{
    int m, n, r;

    cout << "Enter two integers: ";
    cin >> m >> n;

    while(n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    cout << "GCD: " << m << endl;
    return 0;
}