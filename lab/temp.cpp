#include<iostream>

using namespace std;

int main()
{
    double temp;
    char tempInput;

    cout << "Enter C for converting Fahrenheit to Celsius, or, enter F for converting Celsius to Fahrenheit: ";
    cin >> tempInput;

    cout << "Enter the temperature: ";
    cin >> temp;

    if(tempInput == 'F')
    {
        temp = (9*(temp/5)+32);
        cout << "The temperature in Fahrenheit is: " << temp << endl;
    }
    else
    {
        temp = (5*(temp-32))/9;
        cout << "The temperature in Celsius is: " << temp << endl;
    }

    return 0;
}