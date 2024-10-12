/*
 * In-Class 10/23
 * Display 1 - 100, calculate the sum(all numbers, and odd numbers), product, and quotient of 1 - 100
 * Author: Drew Elliott
 * Date: Oct 23, 2023
*/
#include<iostream>

using namespace std;

void display();
int add();
double divide();
double multiply();
int addOdd();

int main()
{
    display();
    cout << endl;
    cout << "Addition: " << add() << endl;;
    cout << "Division: " << divide() << endl;
    cout << "Multiplication: " << multiply() << endl;
    cout << "Sum of Odd: " << addOdd() << endl;

    return 0;
}

void display()
{
    int i = 1;

    while(i <= 100)
    {
        cout << i << " ";
        if(i % 25 == 0)
            cout << endl;
        i++;
    }
}

int add()
{
    int total = 0, i = 1;

    while(i <= 100)
    {
        total += i;
        i++;
    }

    return total;
}

double divide()
{
    double total = 0, i = 1;

    while(i <= 100)
    {
        total += 1/i;
        i++;
    }

    return total;
}

double multiply()
{
    double total = 1, i = 1;

    while(i <= 100)
    {
        total = total * i;
        i++;
    }

    return total;
}

int addOdd()
{
    int total = 0, i = 1;

    while(i <= 100)
    {
        if(i % 2 != 0)
        {
            total += i;
        }
        i++;
    }
    return total;
}

