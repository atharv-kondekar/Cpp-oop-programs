// Enum Constants 

#include<iostream>
using namespace std;

enum MenuOption {Start = 1, Pause, Stop, Exit};

int main() {
    MenuOption choice = Start;

    cout << "Menu: " << endl;
    cout << "1. Start" << endl;
    cout << "2. Pause" << endl;
    cout << "3. Stop" << endl;
    cout << "4. Exit" << endl;
    
    cout << "\nYou chose option: " << choice << endl;

    switch(choice) {
        case Start: cout << "Game started!" << endl;break;
        case Pause: cout << "Game paused!" << endl; break;
        case Stop: cout << "Game stopped!" << endl; break;
        case Exit: cout << "Exiting game!" << endl; break;
    }

    return 0;
}

