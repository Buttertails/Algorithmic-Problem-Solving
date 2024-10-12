/*
 * Lab Week 10 - 3
 * Approximates the value of pi using the series: pi = 4*((-1)^n)/(2n+1)
 * Author: Drew Elliott
 * Date: Oct 24, 2023
*/
#include<iostream>
#include<cmath>

using namespace std;

/*
An approximate value of pi can be calculated using the series given below:
pi = 4*((-1)^n)/(2n+1)
Write a C++ program to calculate the approximate value of pi using this
series.
*/

int main()
{
    int n, i = 0;
    double pi = 0;

    cout << "Enter the limit of the series: ";
    cin >> n;

    while(i < n)
    {
        pi += 4 * pow(-1, i) / (2 * i + 1); 
        i++;
    }

    cout << "Pi Approximation: " << pi << endl;

    return 0;
}