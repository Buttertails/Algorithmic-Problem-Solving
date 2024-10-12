#include<iostream>

using namespace std;

/*
Algorithm
1. Declare int variable for 3-digit number from user and 3 int variables to hold the digits of the number
2. Prompt user to enter 3-digit number and store value in digit variable
3. Assign the first digit variable to be the 3-digit number mod 10 to store the value in the one's place
4. Divide the 3-digit number by 10 to evaluate the digit in the ten's place
5. Assign the second digit variable to be the 3-digit number mod 10 to store the value in the ten's place
6. Divide the 3-digit number by 10 to evaluate the digit in the hunderd's place
7. Since we only have one digit left we assign that value to the third digit variable
8. Display the reformed 3-digit number by printing out the 3 digit variables
*/

int main()
{
    int d1, d2, d3, digit;

    cout << "Enter a 3-digit number: ";
    cin >> digit;

    d1 = digit % 10;
    digit /= 10;

    d2 = digit % 10;
    digit /= 10;

    d3 = digit;

    cout << "The new number is " << d1 << d2 << d3 << endl;

    return 0;
}