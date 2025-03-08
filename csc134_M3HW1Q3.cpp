// CSC 134
// M3HW1-Gold
// Sebastian Camacho
// 03/08/2025

#include <iostream>

using namespace std;

int main()
{
    // starting point
    cout << "Welcome to the valley of death" << endl;
    cout << "There is an open vallly and two bridges ahead. Do you head left or right? (Type left or right)" << endl;
    string choice;
    cin >> choice;

    if (choice == "right") {
        cout << "You chose the right bridge and begin to walk across, but then you fall through the floor of the bridge and die!Game over" << endl;
    }

    if (choice == "left"){
        cout << "You head left and safely cross the bridge" << endl;
        cout << "Ahead lays two paths, one leads to a waterfall and another leads to a trail up a mountain" << endl;
        cout << "Do you head to the waterfall or up the mountain (type waterfall or mountain)" << endl;
        cin >> choice;

        if (choice == "waterfall") {
            cout << "You walk to the waterfall and jump down. Landing in the water it carries you to a cave full of treasure" << endl;
        }else if (choice == "mountain") {
            cout << "You walk up the trail on the mountain. Halfway there you slip and fall to your death. Game over" << endl;
        }else {
            cout << "Invalid choice, you stand there and are eaten by a giant earth worm underneath you. Game over" << endl;
        }
    }

    return 0;
}