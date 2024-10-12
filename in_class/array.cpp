#include<iostream>

using namespace std;

/*
Declare an int type array of size 10
Ask the user to enter value to the array
Display all the values of the array
Sum up all the values in the array
Find the largest value and the smallest value
Display the elements in a reverse order
*/

int main()
{
    int array[10], sum = 0, largest, smallest;

    cout << "Enter 10 numbers: ";

    //Loop to fill array with user input
    for(int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    largest = array[0];
    smallest = array[0];

    //Displays, Sums, and determine smallest and largest
    for(int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
        sum += array[i];
        
        if(array[i] > largest)
        {
            largest = array[i];
        }
        
        if(array[i] < smallest)
        {
            smallest = array[i];
        }
    }

    cout << endl;

    //Displays reverse order
    for(int i = 9; i >= 0; i--)
    {
        cout << array[i] << " ";
    }

    cout << "\nSum: " << sum << endl;
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    
    return 0;
}