#include<iostream>

using namespace std;

int main()
{
    double savings, expenses;

    cout << "Enter savings amount: ";
    cin >> savings;

    cout << "Enter expense amount: ";
    cin >> expenses;

    if(savings > expenses)
    {
        cout << "Amount remaining: " << savings - expenses << endl;
    }
    else
    {
        cout << "Bankrupt!";
    }

    return 0;
}