#include<iostream>

using namespace std;

int main()
{
    double balance = 1000;
    int years;

    while(balance < 2000)
    {
        balance *= 1.05;
        years++;
    }

    cout << "Balance: " << balance << endl;
    cout << "Years: " << years << endl;

    return 0;
}