#include<iostream>

using namespace std;

int main()
{
    int n, sum = 0, smallest, lessThan = 0;
    double average;

    for(int i = 0; i < 10; i++)
    {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> n;

        sum += n;

        if(i == 0 || n < smallest)
        {
            smallest = n;
        }

        if(n < 20)
        {
            lessThan++;
        }
    }

    average = sum / 10.0;

    cout << "Smallest: " << smallest << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Less than 20: " << lessThan << endl;

    return 0;
}