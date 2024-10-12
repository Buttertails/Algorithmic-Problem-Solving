#include<iostream>

using namespace std;

int main()
{
    double weight, height, age, bmr, choc;
    char gender;

    cout << "Enter M for male, or F for female: ";
    cin >> gender;

    cout << "Enter weight(pounds): ";
    cin >> weight;

    cout << "Enter height(inches): ";
    cin >> height;

    cout << "Enter age(years): ";
    cin >> age;

    if(gender == 'M')
    {
        bmr = 66+(6.3*weight)+(12.9*height)-(6.8*age);
    }
    else
    {
        bmr = 655+(4.3*weight)+(4.7*height)-(4.7*age);
    }

    choc = bmr/230;

    cout << "You can eat " << choc << " chocolate bars!";

    return 0;
}