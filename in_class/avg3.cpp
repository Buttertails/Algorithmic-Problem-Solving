#include <iostream>

using namespace std;

double average(double a1, double a2, double a3);

int main()
{
    double a,b,c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Average: " << average(a,b,c) << endl;

    return 0;
}

double average(double a1, double a2, double a3)
{
    return (a1 + a2 + a3) / 3.0;
}