#include<iostream>

using namespace std;

/*
Write a program to let the user enter a letter, and then check if the letter if an upper case letter. 
1. Declare variable to hold letter
2. Prompt user to enter value for letter
3. If letter is greater than A and less than Z, then uppercase letter
4. Display result
*/

int main()
{
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    if(letter >= 'A' && letter <= 'Z')
    {
        cout << "Uppercase";
    }
    else
    {
        cout <<"Lowercase";
    }

    return 0;
}