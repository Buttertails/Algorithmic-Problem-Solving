#include<iostream>

using namespace std;

void sum();
void input();
void largest();

int main()
{
    //sum();
    //input();
    largest();
}

void sum()
{
    int sum = 0;

    for(int i = 1; i <= 20; i++)
    {
        sum += (i * i);
    }

    cout << "Sum: " << sum << endl;
}

void input()
{
    int input, sum = 0;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter number: " << endl;
        cin >> input;
        sum += input;
    }
    cout << "Sum of Input: " << sum << endl;
}

void largest()
{
    int input, largest;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter a number: ";
        cin >> input;

        if(i == 1)
        {
            largest = input;
        }

        if(input > largest)
        {
            largest = input;
        }
    }

    cout << "Largest Num: " << largest << endl;
}