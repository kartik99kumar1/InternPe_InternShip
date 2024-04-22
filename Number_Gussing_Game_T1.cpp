#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    cout << "\n\nWELCOME TO THE NUMBER GUESSING GAME\nYOU WILL HAVE ONLY 10 CHANCES TO GUESS THE NUMBER SO\nALL THE BEST\n" << endl;

    srand((unsigned int) time(NULL));

    int random = rand() % 100;
    int guess = 0, count = 0;
    do
    {
        if (count == 10)
        {
            cout << "OOPs!!!, Your Chances are over.";
            break;
        }
        count++;

        cout << "Enter the Number: ";
        cin >> guess;
        if (guess < random)
            cout << "Guess Higher" << endl;
        else if (guess > random)
            cout << "Guess Lower" << endl;
        else
            cout << "You Won the Game." << endl;
    } while(guess != random);
    return 0;
}