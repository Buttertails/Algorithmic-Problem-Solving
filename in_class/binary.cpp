#include<iostream>

using namespace std;

int main()
{
    int binary, d1, d2, d3, d4, decimal;

    cout << "Enter 4 digit binary number: ";
    cin >> binary;

    d1 = binary%10;
    binary /= 10;

    d2 = binary%10;
    binary /= 10;

    d3 = binary%10;
    binary /= 10;

    d4 = binary;

    decimal = (d1 * 1)+(d2 * 2)+(d3 * 4)+(d4 * 8);    
    cout << "Decimal: " << decimal;

    return 0;
}