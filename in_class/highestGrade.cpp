#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));
    int a[15];

    for(int i = 0; i < 15; i++)
    {
        a[i] = rand() % 100 + 1;
    }

    int max = a[0];

    for(int i = 1; i < 15; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    for(int i = 0; i < 15; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nMax Value: " << max << endl;

    return 0;
}