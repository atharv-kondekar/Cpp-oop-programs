#include<iostream>
using namespace std;

enum Level {Beginner, Intermediate, Expert};

void displayLevel(Level level) {
    switch(level) {
        case Beginner: cout << "You are a Beginner!" << endl; break;
        case Intermediate: cout << "You are Intermediate!" << endl; break;
        case Expert: cout << "You are an Expert!" << endl; break;
    }
}

int main() {
    Level userLevel = Intermediate;

    displayLevel(userLevel);

    return 0;
}

