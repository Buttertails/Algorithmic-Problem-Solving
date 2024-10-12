/*
 * Lab Week 11 - 3
 * Write a program to display Fibonacci series until F(50).
 * Author: Drew Elliott
 * Date: Nov 1, 2023
*/
#include<iostream> 

using namespace std;

/*
The Fibonacci number F(n) are defined as follows. F(0) is 1, F(1) is 1, and
F(i+2) = F(i) + F(i+1), i = 0, 1, 2, 3, 4, ....
In other words, each number is the sum of the previous two numbers.
Write a program to display Fibonacci series until F(50)
*/

int main()
{
    int i = 2;
    double fib, n1 = 1, n2 = 1;

    while(i < 50)
    {
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;

        //cout << fib << " ";

        i++;        
    }

    cout << "F(50) = " << fib << endl;

    return 0;
}