#include<iostream>

using namespace std;

int main()
{
    double wallLength, wallHeight;

    cout << "Enter the length of the wall: ";
    cin >> wallLength;

    cout << "Enter the height of the wall: ";
    cin >> wallHeight;

    cout << "You need " << (wallLength*wallHeight)/(24*100) << " boxes of tiles" << endl;

    return 0;
}