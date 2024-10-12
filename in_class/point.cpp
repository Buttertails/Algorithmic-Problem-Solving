#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << "Distance: " << sqrt(x*x + y*y) << endl;
    return 0;
}