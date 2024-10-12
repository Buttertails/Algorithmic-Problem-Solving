#include<iostream>

using namespace std;

int main()
{
    char gender;

    cout << "Enter either M or F: ";
    cin >> gender;

    if(gender == 'M')
    {
        cout << "Good Morning Mr. ECU" << endl;
    }
    else
    {
        cout << "Good Morning Ms. ECU" << endl;
    }

    return 0;
}