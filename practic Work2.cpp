#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool is_player_visible = false;
    int distane, min_distane, max_distane;
    string game_mode;
    cin >> distane >> min_distane >> max_distane;
    cin >> game_mode;

    if (is_player_visible == false) {
        cout << "The Entity is wandering in the shadows..." << endl;

    } else if (distane < 5) {
        cout << "GRAND FINAL!" << endl;

    } else if (distane <= 15) {
        cout << "He's watch to you..." << endl;

    } else //if (distane > 15) {
        if (game_mode == "hard") {
            cout << "Phase: Hunting started!" << endl;
        } else {
            cout << "He's not going to you..." << endl;
        }

    return 0;

}

//10.04.2026
//22:18
//City Nefteugansk