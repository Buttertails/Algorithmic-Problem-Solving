/*
 * Lab Week 9 - 3
 * score a rock, paper, scissors game
 * Author: Drew Elliott
 * Date: Oct 18, 2023
*/
#include<iostream>

using namespace std;

int main()
{
    char p1, p2;

    cout << "Enter a choice for player 1 (R, P, S): ";
    cin >> p1;

    cout << "Enter a choice for player 2 (R, P, S): ";
    cin >> p2;

    if((p1 == 'R' || p1 == 'r') && (p2 == 'S' || p2 == 's'))
        cout << "Player 1 wins!";
    else if((p1 == 'P' || p1 == 'p') && (p2 == 'R' || p2 == 'r'))
        cout << "Player 1 wins!";
    else if ((p1 == 'S' || p1 == 's') && (p2 == 'P' || p2 == 'p'))
        cout << "Player 1 wins!";
    else if((p2 == 'R' || p2 == 'r') && (p1 == 'S' || p1 == 's'))
        cout << "Player 2 wins!";
    else if((p2 == 'P' || p2 == 'p') && (p1 == 'R' || p1 == 'r'))
        cout << "Player 2 wins!";
    else if ((p2 == 'S' || p2 == 's') && (p1 == 'P' || p1 == 'p'))
        cout << "Player 2 wins!";
    else
        cout << "Draw!";

    return 0;
}