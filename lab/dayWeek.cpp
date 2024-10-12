#include<iostream>

using namespace std;

/*
1. Declare variables for month, day, and year from user. Declare variables for the values used for calculating day of the week
2. Prompt user for year, month, and day and store results
3. Perform calculations based off Gregorian calendar formulas
4. display result
*/

int main()
{
    int m, d, y, yCalc, x, mCalc, day;

    cout << "Enter the year: ";
    cin >> y;

    cout << "Enter the month: ";
    cin >> m;

    cout << "Enter the day: ";
    cin >> d;

    yCalc = y-(14-m)/12;
    x = yCalc + (yCalc/4)-(yCalc/100)+(yCalc/400);
    mCalc = m + 12 * ((14-m)/12)-2;
    day = (d+x+(31*mCalc)/12) % 7;

    cout << "The day of the week is " << day << endl;

    return 0;
}