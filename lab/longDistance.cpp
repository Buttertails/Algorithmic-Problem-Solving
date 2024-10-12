#include<iostream>

using namespace std;

/*
Write program to calculate the cost of a long-distance call.
1. call started between 8AM-(18)6PM billed at rate of $0.40 p/ min
2. call started before 8AM or after 6AM billed at rate of $0.25 p/ min
3. input of starting hour, minute and ending hour, minute
4. output the cost of the call
find length of call by end - start
if start is between 8 AND 18 then rate = 0.40
if start is not between 8 and 18 then rate = 0.25
start hour is 6:30 end time is 12:15; if min == (-), then hourLen -= 1 and minLen + 60; 
*/

int main()
{
    int startHour, startMin, endHour, endMin, hourLen, minLen;
    double cost, rate;

    cout << "Enter starting hour and minute: ";
    cin >> startHour >> startMin;

    cout << "Enter ending hour and minute: ";
    cin >> endHour >> endMin;

    hourLen = endHour - startHour;
    minLen = endMin - startMin;

    if(minLen < 0)
    {
        hourLen -= 1;
        minLen += 60;
    }

    if(startHour > 8 && startHour < 18)
    {
        rate = 0.4;
    }
    else if(startHour < 8 || startHour > 18)
    {
        rate = 0.25;
    }

    cost = (hourLen * rate * 60) + (minLen * rate);

    cout << "The cost is $" << cost << endl;

    return 0;
}