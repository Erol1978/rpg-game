#include <iostream>
#include "Game.h"

using namespace std;

void displayMenu();

int main() {
    Game game;

    bool running = true;
    int choice;

    while (running) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            cout << "Game started!" << endl;
        }
        else if (choice == 2) {
            cout << "Player HP: " << game.getPlayer().getHealth() << endl;
        }
        else if (choice == 3) {
            running = false;
        }
        else {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}

void displayMenu() {
    cout << "\n=== RPG Menu ===" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Show Stats" << endl;
    cout << "3. Quit" << endl;
    cout << "Choice: ";
}
