#include<iostream>

using namespace std;

int main()
{
    double billAmount, tipPercentage, finalAmount;
    int numPeople;

    cout << "Enter the bill amount: ";
    cin >> billAmount;

    cout << "Enter the number of people: ";
    cin >> numPeople;

    cout << "Enter the tip percentage: ";
    cin >> tipPercentage;

    finalAmount = ((billAmount*(tipPercentage/100))+billAmount)/numPeople;

    cout << "Total Bill Amount: " << billAmount << endl;
    cout << "Bill Amount per Person: " << finalAmount << endl;

    return 0;
}