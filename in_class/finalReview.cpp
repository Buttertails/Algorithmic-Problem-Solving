#include<iostream>

using namespace std;

int main()
{
    int a[10] = {5, 10, 15, 20, 25, 30}, sum = 0;

    for(int i = 0; i < 10; i++)
    {
        if(a[i] > 15)
        {
            break;
        }
        sum += a[i];
    }

    cout << "Sum is " << sum << endl;
    return 0;
}