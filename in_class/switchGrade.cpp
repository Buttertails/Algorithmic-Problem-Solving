#include<iostream>

using namespace std;

int main()
{
    char grade;

    cout << "Enter letter grade: ";
    cin >> grade;

    switch(grade)
    {
        case 'A':
            cout << "Excellent";
            break;
        case 'B':
            cout << "Good";
            break;
        case 'C':
            cout << "Average";
            break;
        case 'D':
            cout << "Poor";
            break;
        case 'F':
            cout << "Failing";
            break;
        default:
            cout << "Invalid Entry";
            break;
    }
    
    return 0;
}