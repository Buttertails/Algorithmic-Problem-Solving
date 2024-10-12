#include<iostream>

using namespace std;

/*
Write a program to compute the interest due, total amount due, 
and the minimum payment for a revolving credit account. The program
accepts the account balance as input, then adds on the interest to get 
the total amount due. The rate schedules are the following: 
The interest is 1.5 percent on the first $1,000 and 1 percent on any amount over that. 
The minimum payment is the total amount due if that is $10 or less; 
otherwise, it is $10 or 10 percent of the total amount owed, whichever is larger.
*/

int main()
{
    double balance, total, interest, totalInterest, flatInterest, minPayment;
    interest = 0;

    cout << "Please enter the account balance: $";
    cin >> balance;

    if(balance >= 1000)
    {
        interest = 1000 * .015;
        flatInterest = (balance - 1000) * .01;
    }

    flatInterest = balance * .01;
    totalInterest = interest + flatInterest;

    total = balance + totalInterest;

    if(total < 10)
    {
        minPayment = total;
    }
    else if(total * 0.1 > 10)
    {
        minPayment = total * 0.1;
    }
    else
    {
        minPayment = 10;
    }

    cout << "The interest due is $" << totalInterest << endl;
    cout << "The total amount due is $" << total << endl;
    cout << "The minimum payment is $" << minPayment << endl; 

    return 0;
}