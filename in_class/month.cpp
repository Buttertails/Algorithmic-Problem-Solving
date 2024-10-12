#include<iostream>

using namespace std;

int main()
{
    int month;

    cout << "Enter a number 1 through 12 for the month: ";
    cin >> month;

    if(month >= 1 && month <= 12)
    {
        cout << "Correct entry!";
    }
    else
    {
        cout << "Incorrect entry!";
    }

    return 0;
}