#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int i = 1;

    srand(time(0));

    while(i <= 10)
    {
        int random = (rand() % 100) + 1; 
        cout << random << " ";
        i++;
    }

    return 0;
}