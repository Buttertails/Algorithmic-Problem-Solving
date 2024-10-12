/*
 * Lab Week 11 - 1
 * Write a program that input a double for n and iterates through the Babylonian algorithm 100 times.
 * Author: Drew Elliott
 * Date: Nov 1, 2023
*/
#include<iostream>

using namespace std;

/*
The Babylonian algorithm to compute the square root of a number n is as follows:
 * a.	Make a guess at the answer (you can pick n/2 as your initial guess)
 * b.	Compute r = n / guess
 * c.	Set guess = (guess + r) / 2
 * d.	Go back to step 2 for as many iterations as necessary. 
 *      The more that steps 2 and 3 are repeated, the closer guess will become to the square root of n.
 * Write a program that input a double for n and iterates through the Babylonian algorithm 100 times. 
*/

int main()
{
    double n, guess, r, i = 1;

    cout << "Enter value for n: ";
    cin >> n;

    guess = n / 2;

    while(i <= 100)
    {
        r = n / guess;
        guess = (guess + r)/2;
        i++;
    }

    cout << "Square Root: " << r << endl;

    return 0;
}