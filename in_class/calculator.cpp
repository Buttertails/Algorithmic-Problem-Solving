#include<iostream>

using namespace std;

/*
1. Display menu and prompt user to make selection
2. store selection in char variable
3. if char == a, then addition; if char == s, then subtraction; if char == m, then multiplication; then char == d, then division
4. Prompt user for two numbers and store in int variables
5. calculate 
6. display result
*/

int main()
{
    char menu;
    double x, y;

    while(!(menu == 'Q' || menu == 'q'))
    {
        cout << "*********Welcome*********\n";
        cout << "Please select from the menu\n";
        cout << "A. Addition\n";
        cout << "S. Subtraction\n";
        cout << "M. Multiplication\n";
        cout << "D. Division\n";
        cout << "Q. Quit\n";
        cout << "Selection: ";
        cin >> menu;

        if(menu == 'A' || menu == 'a')
        {
            cout << "Please enter two numbers: ";
            cin >> x >> y;
            cout << x << " + " << y << " = " << x+y << endl;
        }
        else if(menu == 'S' || menu == 's')
        {
            cout << "Please enter two numbers: ";
            cin >> x >> y;
            cout << x << " - " << y << " = " << x-y << endl;
        }
        else if(menu == 'M' || menu == 'm')
        {
            cout << "Please enter two numbers: ";
            cin >> x >> y;
            cout << x << " * " << y << " = " << x*y << endl;
        }
        else if(menu == 'D' || menu == 'd')
        {
            cout << "Please enter two numbers: ";
            cin >> x >> y;
            cout << x << " / " << y << " = " << x/y << endl;
        }
    }

    cout << "Goodbye!" << endl;

    return 0;
}