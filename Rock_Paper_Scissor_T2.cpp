/*
Name: Kartik Kumar
Task 2 : ROCK PAPER SCISSOR Game.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "\nWelcome to ROCK PAPER SCISSOR GAME\nYou will get \"5\" chances in Each round, you can play as many rounds you want" << endl;
    char ls[] = {'R', 'P', 'S'};
    int i = 1;

    while (true) {
        cout << "\nRound: " << i << "\n" << endl;
        for (int j = 0; j < 5; j++) {
            char rs = ls[rand() % 3];
            cout << "Enter  R: ROCK  P: PAPER  S: SCISSOR" << endl;
            char ui;
            cout << "Enter Your Choice: ";
            cin >> ui;
            cout << "Computer choice: " << rs << endl;
            if ((ui == 'R' && rs == 'R') || (ui == 'P' && rs == 'P') || (ui == 'S' && rs == 'S')) {
                cout << "Tie" << endl;
            } else if ((ui == 'R' && rs == 'S') || (ui == 'P' && rs == 'R') || (ui == 'S' && rs == 'P')) {
                cout << "Win" << endl;
            } else {
                cout << "Loose" << endl;
            }
        }
        i++;
        int cont;
        cout << "Do you want to continue for the next round:\nEnter 1 to continue else 0: ";
        cin >> cont;
        if (cont == 0) {
            break;
        }
    }
    cout << "\nThank you for playing this game." << endl;
    return 0;
}
