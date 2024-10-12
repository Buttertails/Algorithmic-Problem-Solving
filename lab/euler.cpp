#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int x;
    double num, den, f = 1, sum = 1;
    
    cout << "Enter value for x: ";
    cin >> x;

    for(int i = 1; i <= 100; i++)
    {
        num = pow(x, i);
        f *= i;
        den = f;
        sum += num/den;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}