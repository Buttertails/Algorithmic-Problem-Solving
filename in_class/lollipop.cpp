#include<iostream>

using namespace std;

int main()
{
    int age;
    char gender;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter gender(M or F): ";
    cin >> gender;

    if(age < 10 && gender == 'F')
    {
        cout << "You got a pink lollipop!";
    }
    else if(age < 10 && gender == 'M')
    {
        cout << "You got a blue lollipop!";
    }
    else
    {
        cout << "No lollipop!";
    }

    return 0;
}