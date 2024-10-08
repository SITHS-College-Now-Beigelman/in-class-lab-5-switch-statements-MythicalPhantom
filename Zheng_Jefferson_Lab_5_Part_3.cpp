//Jefferson Zheng
//September 23, 2024
//Homework 1 Part 2

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int direction, horizontal, vertical, total, moves;

    /*
    horizontal = 0;
    vertical = 0;

    for (int i = 0; i < 25; i++) {

        direction = rand() % 4 + 1;

        switch (direction) {
            case 1:
                vertical += 1;
                break;
            case 2:
                vertical -= 1;
                break;
            case 3:
                horizontal += 1;
                break;
            case 4:
                horizontal -= 1;
                break;
        }

        if (vertical > 0)
            cout << vertical << " Blocks North ";
        else if (vertical < 0)
            cout << -vertical << " Blocks South ";
        if (horizontal > 0)
            cout << horizontal << " Blocks East";
        else if (horizontal < 0)
            cout << -horizontal << " Blocks West";
        if (vertical == 0 && horizontal == 0)
            cout << "Back to Starting Point" << endl;
        if (vertical != 0 || horizontal != 0)
            cout << endl;
    }
    */
    
    /*
    1 Blocks West
    Back to Starting Point
    1 Blocks West
    Back to Starting Point
    1 Blocks North
    Back to Starting Point
    1 Blocks West
    2 Blocks West
    3 Blocks West
    1 Blocks North 3 Blocks West
    1 Blocks North 2 Blocks West
    1 Blocks North 3 Blocks West
    3 Blocks West
    4 Blocks West
    1 Blocks South 4 Blocks West
    2 Blocks South 4 Blocks West
    3 Blocks South 4 Blocks West
    4 Blocks South 4 Blocks West
    3 Blocks South 4 Blocks West
    4 Blocks South 4 Blocks West
    5 Blocks South 4 Blocks West
    5 Blocks South 3 Blocks West
    5 Blocks South 4 Blocks West
    4 Blocks South 4 Blocks West
    4 Blocks South 3 Blocks West
    */

    /*
    horizontal = 0;
    vertical = 0;
    moves = 0;

    while (vertical != 3 || horizontal != 2) {
        direction = rand() % 4 + 1;
        moves += 1;

        switch (direction) {
            case 1:
                vertical += 1;
                break;
            case 2:
                vertical -= 1;
                break;
            case 3:
                horizontal += 1;
                break;
            case 4:
                horizontal -= 1;
                break;
        }
    }

    cout << moves << " Moves Needed!" << endl;
    */

    /*
    21 Moves Needed!
    */

    
    total = 0;
    for (int i = 0; i < 10; i++) {
        moves = 0;
        horizontal = 0;
        vertical = 0;

        while (vertical != 3 || horizontal != 2) {
            direction = rand() % 4 + 1;
            moves++;

            switch (direction) {
                case 1:
                    vertical++;
                    break;
                case 2:
                    vertical--;
                    break;
                case 3:
                    horizontal++;
                    break;
                case 4:
                    horizontal--;
                    break;
            }
        }
        cout << moves << " Moves Needed!" << endl;
        total += moves;
    }

    double average = total/10;

    cout << average << " Moves Needed on Average!" << endl;

    /*
    9 Moves Needed!
    185 Moves Needed!
    262105 Moves Needed!
    141 Moves Needed!
    281 Moves Needed!
    13 Moves Needed!
    999 Moves Needed!
    71379 Moves Needed!
    5 Moves Needed!
    1809 Moves Needed!
    33692 Moves Needed on Average!
    */

    //There is no way this thing actualy works, this is bullshit.

    return 0;
}
