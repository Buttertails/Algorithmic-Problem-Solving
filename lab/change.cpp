#include<iostream>

using namespace std;

/*
1. Declare variable to hold number of cents from user
2. Prompt user for number of cents
3. to find the number of quarters divide the number of cents by 25 and store result
4. subtract the number of cents by the number of quarters times 25
5. to find the number of dimes divide the number of cents by 10 and store result
6. subtract the number of cents by the number of dimes times 10
7. to find the number of nickels divide the number of cents by 10 and store result
8. subtract the number of cents by the number of nickels times 5
9. to find number of pennies store the remaining number of cents
10. display result
*/

int main()
{
    int cents, quarter, dime, nickel, penny;

    cout << "Enter a number between 0 to 99: ";
    cin >> cents;

    quarter = cents/25;
    cents -= quarter * 25;

    dime = cents/10;
    cents -= dime * 10;

    nickel = cents/10;
    cents -= nickel * 5;

    penny = cents;

    cout << "The number of quarter: " << quarter << endl;
    cout << "The number of dime: " << dime << endl;
    cout << "The number of nickel: " << nickel << endl;
    cout << "The number of penny: " << penny << endl;
    
    return 0;
}