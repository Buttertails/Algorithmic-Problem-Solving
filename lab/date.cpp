/*
 * Lab Week 9 - 1
 * To convert month number to month name and add suffix to day number
 * Author: Drew Elliott
 * Date: Oct 18, 2023
*/
#include<iostream>

using namespace std;

int main()
{
    int monthNum, dayNum;
    string month, daySuff;

    cout << "Enter the number of month: ";
    cin >> monthNum;

    cout << "Enter the number of date: ";
    cin >> dayNum;

    switch(monthNum)
    {
        case 1:
            month = "Jan";
            break;
        case 2:
            month = "Feb";
            break;
        case 3:
            month = "Mar";
            break;
        case 4:
            month = "Apr";
            break;
        case 5:
            month = "May";
            break;
        case 6:
            month = "Jun";
            break;
        case 7:
            month = "Jul";
            break;
        case 8:
            month = "Aug";
            break;
        case 9:
            month = "Sep";
            break;
        case 10:
            month = "Oct";
            break;
        case 11:
            month = "Nov";
            break;
        case 12:
            month = "Dec";
            break;
    }

    if(dayNum % 10 == 1 && dayNum != 11)
    {
        daySuff = "st";
    }
    else if(dayNum % 10 == 2 && dayNum != 12)
    {
        daySuff = "nd";
    }
    else if(dayNum % 10 == 3 && dayNum != 13)
    {
        daySuff = "rd";
    }
    else
    {
        daySuff = "th";
    }
    
    cout << "The date is " << month << " " << dayNum << daySuff << endl;

    return 0;
}