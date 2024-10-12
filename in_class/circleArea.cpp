#include<iostream>

using namespace std;

double area(double r);

int main()
{
    double circles[4] = {7, 8.9, 10, 4.3};
    return 0;

    for(int i = 0; i < 4; i++)
    {
        cout << area(circles[i]) << endl;
    }
}

double area(double r)
{
    return (3.14 * r * r);
}