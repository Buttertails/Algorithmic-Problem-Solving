#include<iostream>

using namespace std;

int main()
{
    int num;
    
    cout << "Enter a two digit number: ";
    cin >> num;

    cout << "New number: " << num%10 << num/10 << endl;

    return 0;
}