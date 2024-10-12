#include<iostream>

using namespace std;

int main()
{
    double amount;
    
    cout << "Enter the amount: ";
    cin >> amount;

    if(amount >= 50 && amount < 75)
    {
        cout << "You got $10 off!\n";
        amount -= 10;
    }
    else if(amount >= 75 && amount < 100)
    {
        cout << "You got $20 off!\n";
        amount -= 20;
    }
    else if(amount >= 100)
    {
        cout << "You got $30 off!\n";
        amount -= 30;
    }
    else
    {
        cout << "No discount!\n";
    }

    cout << "Amount: " << amount << endl;
    
    return 0;
}