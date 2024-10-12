/*
 * Lab Week 13 - 3
 * Let user enter integer, count number of digits in number
 * Author: Drew Elliott
 * Date: Nov 15, 2023
*/
#include<iostream>

using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter num: ";
    cin >> num;

    do
    {
        count++;
        num /= 10;
    } 
    while(num / 10.0 != 0);

    cout << "The number of digits: " << count << endl;
    
    return 0;
}