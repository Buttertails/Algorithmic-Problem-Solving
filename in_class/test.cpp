#include<iostream>

using namespace std;

int main()
{
    string s;
    int num = 0;

    std::cout << "Roman: ";
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'X' && i < s.length() - 1 && s[i + 1] == 'L')
        {
            num += 40;
            i++;
            continue;
        }
        else if(s[i] == 'X' && i < s.length() - 1 && s[i + 1] == 'C')
        {
            num += 90;
            i++;
            continue;
        }
        else if(s[i] == 'C' && i < s.length() - 1 && s[i + 1] == 'D')
        {
            num += 400;
            i++;
            continue;
        }
        else if(s[i] == 'C' && i < s.length() - 1 && s[i + 1] == 'M')
        {
            num += 900;
            i++;
            continue;
        }
        else if(s[i] == 'I' && i < s.length() - 1 && s[i + 1] == 'V')
        {
            num += 4;
            i++;
            continue;
        }
        else if(s[i] == 'I' && i < s.length() - 1 && s[i + 1] == 'X')
        {
            num += 9;
            i++;
            continue;
        }
        else if(s[i] == 'M' && i > 0 && s[i - 1] != 'C')
        {
            num += 1000;
            continue;
        }
        else if(s[i] == 'D' && i > 0 && s[i - 1] != 'C')
        {
            num += 500;
            continue;
        }
        else if(s[i] == 'C' && i > 0 && s[i - 1] != 'X')
        {
            num += 100;
            continue;
        }
        else if(s[i] == 'L' && i > 0 && s[i - 1] != 'X')
        {
            num += 50;
            continue;
        }
        else if(s[i] == 'X' && i > 0 && s[i - 1] != 'I')
        {
            num += 10;
            continue;
        }
        else if(s[i] == 'V' && i > 0 && s[i - 1] != 'I')
        {
            num += 5;
            continue;
        }
         else if(s[i] == 'M')
        {
            num += 1000;
            continue;
        }
        else if(s[i] == 'D')
        {
            num += 500;
            continue;
        }
        else if(s[i] == 'C')
        {
            num += 100;
            continue;
        }
        else if(s[i] == 'L')
        {
            num += 50;
            continue;
        }
        else if(s[i] == 'X')
        {
            num += 10;
            continue;
        }
        else if(s[i] == 'V')
        {
            num += 5;
            continue;
        }
        else if(s[i] == 'I')
        {
            num += 1;
            continue;
        }
        std::cout  << s[i] << " " << i << " " << num << endl;
    }

    std::cout << num << endl;

    return 0;
}