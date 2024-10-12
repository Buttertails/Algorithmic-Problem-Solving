#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

/*
Write a program to declare an array of size 100, then

1. ask the user to enter some number, ended by -1, -1 is not the value of the array

2. display the values in the array

3. add a new value 50 to the end of the numbers

4. add a new value 80 as the second value of the array
*/

int main()
{
    const int MAX = 100;
    int a[MAX], input, count = 0;

    cout << "Enter numbers (-1 to quit): ";

    while(input != -1)
    {
        cin >> input;
        if(input != -1)
        {    
            a[count] = input;
            count++;
        }
    }

    //display array
    for(int i = 0; i < count; i++) 
    {
        cout << a[i] << " ";
    }

    a[count] = 50;
    count++;

    cout << endl;

    //display array after adding 50
    for(int i = 0; i < count; i++)
    {
        cout << a[i] << " ";
    }

    for(int i = count - 1; i > 0; i--)
    {
        a[i + 1] = a[i];
    }

    a[1] = 80;
    count++;

    cout << endl;

    //display array after making 80 second element
    for(int i = 0; i <= count - 1; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}