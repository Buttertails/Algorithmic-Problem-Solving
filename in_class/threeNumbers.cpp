#include<iostream>

using namespace std;

/*
Write a program to let the user enter three numbers and check if they equal to each other.
1. Declare three variables to hold each number
2. Prompt user to enter numbers
3. If, num1 == num2 AND num1 == num3 AND num2 == num3, then numbers are equal
4. Display results
*/

int main()
{
    int n1, n2, n3;

    cout << "Enter three numbers (space between): ";
    cin >> n1 >> n2 >> n3;

    if(n1 == n2 && n1 == n3 && n2 == n3)
    {
        cout << "Numbers are equal";
    }
    else
    {
        cout << "Numbers are not equal";
    }
    return 0;
}