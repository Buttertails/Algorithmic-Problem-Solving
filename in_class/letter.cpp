#include<iostream>

using namespace std;

/*
Write a program to let the user enter a character, then check if the character is a letter (either upper case or lower case).
1. Declare variable to hold letter
2. Prompt user to enter value for letter
3. If letter is greater than A and less than Z, then uppercase letter
4. Display result
*/

int main()
{
    char letter;

    cout << "Enter letter: ";
    cin >> letter;

    if((letter >= 'A' && letter <= 'Z')||(letter >= 'a' && letter <= 'z'))
    {
        cout << "Letter";
    }
    else
    {
        cout << "Not a Letter";
    }
    
    return 0;
}