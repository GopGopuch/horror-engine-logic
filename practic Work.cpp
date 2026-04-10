#include <iostream>

using namespace std;

int main()
{
    bool has_grabpack = false;
    int player_pulse;
    cin >> player_pulse;

    if (player_pulse > 120) {
        cout << "Monster hearing you! RUN!!!" << endl;

    } else if (has_grabpack == false) {
            cout << "This is own end..." << endl;
        
    } else {
        if (has_grabpack == true && player_pulse <= 120) 
            cout << "All fine..." << endl;
    }
    return 0;
}

//10.04.2026
//21:53
//city Nefteugansk