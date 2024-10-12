/*
 * Lab Week 15 - 2
 * Write a program to calculate the size of string and number of vowels
 * Author: Drew Elliott
 * Date: Nov 29, 2023
*/
#include<iostream>

using namespace std;

int main()
{
    string s;
    int length = 0, v = 0;

    cout << "Enter a string: ";
    cin >> s;

    while(s[length] != '\0')
    {
        if(s[length] == 'a' || s[length] == 'A')
            v++;
        else if(s[length] == 'e' || s[length] == 'E')
            v++;
        else if(s[length] == 'i' || s[length] == 'I')
            v++;
        else if(s[length] == 'o' || s[length] == 'O')
            v++;
        else if(s[length] == 'u' || s[length] == 'U')
            v++;

        length++;
    }

    cout << "Length: " << length << endl;
    cout << "Vowels: " << v << endl;

    return 0;
}