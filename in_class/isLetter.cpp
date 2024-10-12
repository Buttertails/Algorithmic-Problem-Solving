#include<iostream>

using namespace std;

bool isLetter(char c);

int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    
    if(isLetter(c))
        cout << "Letter" << endl;
    else
        cout << "Not Letter" << endl;
    return 0;
}

bool isLetter(char c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return true;
    else
        return false;
}