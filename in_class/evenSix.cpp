#include<iostream>

using namespace std;

int main()
{
    int i = 0, total = 0;
    while(i < 100)
    {
        if(i % 2 == 0 && i % 6 == 0)
        {
            total += i;
        }
        i++;
    }
    cout << "Total: " << total << endl;
    return 0;
}