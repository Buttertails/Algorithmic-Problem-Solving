/*
 * In-Class 10/27
 * Update the prime number program to display all the prime numbers between 3 and 100 and 
 * also calculate the sum of all the prime numbers you found.
 * Author: Drew Elliott
 * Date: Oct 28, 2023
*/
#include<iostream>

using namespace std;

int main()
{
    int i = 3, sum = 0;

    cout << "Prime Numbers: ";

    while(i <= 100)
    {
        int j = 2;
        bool notPrime = false; 
        while(j <= i/2)
        {
            if(i % j == 0)
            {
                notPrime = true;
                break;
            }
            j++;
        }
        if(notPrime == false)
        {
            cout << i << " ";
            sum += i;
        }

        i++;
    }
    
    cout << "\nSum: " << sum << endl;
    cout << "Goodbye!" << endl;

    return 0;
}