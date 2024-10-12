#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int bin, digit, i = 0;
    double total = 0;

    cout << "Enter binary number: ";
    cin >> bin;

    do
    {
        digit = bin % 10;
        total += digit * pow(2, i);
        bin /= 10;
        i++;
    }
    while(bin != 0);

    cout << "Decimal: " << total << endl;

    return 0;
}