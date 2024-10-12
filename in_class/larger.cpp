#include<iostream>

using namespace std;

int main()
{
    int x, y, max;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    if(x>y)
    {
        max = x;
    }
    else
    {
        max = y;
    }

    cout << "Max: " << max << endl;

    return 0;
}