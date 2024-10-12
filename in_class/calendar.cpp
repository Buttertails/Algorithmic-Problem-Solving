/*
 * In-Class 10/27
 * Write the program that print a one-month calendar. The user specify the number of
 * days in the month and the day of the week on which the month begins.
 * Author: Drew Elliott
 * Date: Oct 28, 2023
*/
#include<iostream>

using namespace std;

int main()
{
    //i, j, k are loop variables, days hold the number of days in the month
    int i = 1, j = 1, k = 1, days, dayOfWeek;

    cout << "Calendar" << endl;

    cout << "Enter the number of days in the month: ";
    cin >> days;

    cout << "Enter the day of the week (1 = Sun, 7 = Sat): ";
    cin >> dayOfWeek;


    //Loop that creates empty days so the calendar will start on the correct day of the week
    while(k <= (dayOfWeek - 1))
    {
        cout << '\t';
        k++;
    }

    //Loop that displays the number of days for first week of calendar
    for(k = 1; k <= (8 - dayOfWeek); k++)
    {
        cout << k << "\t";
    }

    //Go to next line to start displaying the remaining days in the month 
    cout << "\n";

    //"i" is being set to (9 - dayOfWeek) to get the correct starting day on the second week of the month
    i = (9 - dayOfWeek);

    //loop displays remaining days in month 
    while(i <= days)
    {
        cout << i << '\t';

        //j is used to keep track of the number of days in a week, when the number of days reaches 7 then it goes to a new line
        if(j == 7)
        {
            cout << "\n";
            j = 0;
        }
        i++;
        j++;
    }

    return 0;
}