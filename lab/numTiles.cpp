#include<iostream>

using namespace std;

int main()
{
    int wallLength = 120;
    int wallHeight = 200;

    int tileLength = 6;
    int tileHeight = 4;
    
    cout << "You need " << ((wallLength*wallHeight)/((tileLength*tileHeight)*100)) << " boxes of tiles";    
    return 0;
}