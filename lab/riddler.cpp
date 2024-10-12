/*
 * Lab Week 11 - 2
 * Write a program that use a loop to find the addresses where Riddler plans to strike.
 * Author: Drew Elliott
 * Date: Nov 1, 2023
*/
#include<iostream>

using namespace std;

/*
Holy digits Batman! The Riddler is planning his next caper somewhere on Pennsylvania Avenue. 
In his usual sporting fashion, he has left the address in the form of a puzzle. 
The address on Pennsylvania is a four-digit number where:
a.	The digit in the thousands place is three times the digit in the tens place
b.	The number is odd
c.	The sum of the digits is 27
Write a program that use a loop to find the addresses where Riddler plans to strike.
range of digit is 1000 - 9999
loop runs until all three tests are true, should use 3 boolean to hold tests and 1 boolean to hold final check
a. (digit / 1000) == 3 * ((digit % 100) / 10)
b. digit % 2 == 1
c. 27 == (digit/1000) + (digit % 10) + ((digit % 1000)/100) + ((digit % 100) / 10)
c. 27 == thousands + ones + hundereds + tens
*/

int main()
{
    bool t1, t2, t3, found;
    int address = 1000;

    while(address <= 9999)
    {
        if((address / 1000) == (3 * ((address % 100) / 10)))
        {
            t1 = true;
        }
        else
            t1 = false;

        if(address % 2 == 1)
        {
            t2 = true;
        }
        else   
            t2 = false;

        if(((address/1000) + (address % 10) + ((address % 1000)/100) + ((address % 100) / 10)) == 27)
        {
            t3 = true;
        }
        else
            t3 = false;

        if((t1 == true) && (t2 == true) && (t3 == true))
        {
            found = true;
            break;
        }
        else
            found = false;

        address++;
    }

    cout << "Address: " << address << " Pennsylvania Avenue" << endl;

    return 0;
}