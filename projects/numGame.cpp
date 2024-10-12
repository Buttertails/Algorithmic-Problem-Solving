/*
 * Project 1
 * Number guessing game
 * Author: Drew Elliott
 * Date: Nov 7, 2023
*/
#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
Number guessing game!
The program generate a random number between 1 and 100
The player guess the number
Each time after the player enter the number, the system should give some feedback
Too big
Too small
Just right! (then finish the current round)
The player has up to 10 times for the game
Set the game to be able to play multiple times until the player decide to quit the game
*/

int main()
{
    int i, guess, random, wins = 0;
    char play;

    cout << "*****NUMBER GUESSING GAME*****" << endl;
    cout << "Would you like to play?" << endl;
    cout << "Y: Yes\nN: No" << endl;
    cout << "Selection: ";
    cin >> play;

    while(play == 'Y' || play == 'y')
    {
        srand(time(0));
        random = (rand() % 100) + 1;
        
        i = 1;

        while(i <= 10)
        {
            cout << "Enter your guess " << i << ": ";
            cin >> guess;

            while(!(guess >= 0 && guess <= 100))
            {
                cout << "INCORRECT ENTRY:NUMBER OUTSIDE RANGE!" << endl;
                cout << "Guess again: " << endl;
                cin >> guess;
            }

            if(guess < random)
            {
                cout << "Too small" << endl;
            }
            else if(guess > random)
            {
                cout << "Too large" << endl;
            }
            else if(guess == random)
            {
                cout << "Just right!" << endl;
                cout << "\nCongratulations! You Win!" << endl;
                wins++;
                break;
            }
            else
            {
                cout << "INCORRECT ENTRY!" << endl;
                cout << "Try another entry: " << endl;
                cin >> guess;
            }

            if(i == 10 && guess != random)
            {
                cout << "\nYou did not guess the correct answer" << endl;
                cout << "Correct Answer: " << random << endl;
            }
            
            i++;
        }

        cout << "\nWould you like to play?" << endl;
        cout << "Y: Yes\nN: No" << endl;
        cout << "Selection: ";
        cin >> play;
    }

    cout << "\nGAME OVER!" << endl;
    cout << "Number of Wins: " << wins << endl;

    return 0;
}
