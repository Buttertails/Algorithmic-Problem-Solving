/*
 * In-Class 10/27
 * Calculate the average value of all the even numbers between 100 and 200 (100 is included and 200 is not included)
 * Author: Drew Elliott
 * Date: Oct 28, 2023
*/
#include<iostream>

/*
Write a program to calculate the average value of all the even numbers between 100
and 200 (100 is included and 200 is not included)
*/

using namespace std;

int main()
{
    //"i" variable will hold the even numbers between 100-200
    //"total" variable will be used to hold the sum of all even numbers in the range
    //"count" variable will be used to hold the number of times the loop is iterated
    int i = 100, total = 0, count = 0;

    //Loop sums all the even numbers in the range and increments count
    while(i < 200)
    {   
        total += i;
        i += 2;
        count++;
    }

    /*
    Debugging
    cout << "Total: " << total << endl;
    cout << "Count: " << count << endl;
    */

    //display average, type cast average as double to override integer division
    cout << "Average: " << (double)total/count << endl;

    return 0;
}