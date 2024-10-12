#include<iostream>

using namespace std;

int main()
{
    int i, sum = 0;

    while(i != 0)
    {
        cout << "Enter an integer (0 to end): ";
        cin >> i;

        sum += i;
    }

    cout << "Sum: " << sum << endl;

    return 0;  
}