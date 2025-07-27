#include <iostream>
#include <cctype>  // For toupper()

using namespace std;

int main() {
    char light;
    int timeRemaining;

    cout << "Enter current light (R/G/Y): ";
    cin >> light;
    light = toupper(light); 
    cout << "Enter remaining time: ";
    cin >> timeRemaining;
    if (light == 'R') {
        cout << "Current: RED light" << endl;
    } else if (light == 'G') {
        cout << "Current: GREEN light" << endl;
    } else if (light == 'Y') {
        cout << "Current: YELLOW light" << endl;
    } else {
        cout << "Invalid light color!" << endl;
        return 1;
    }
    cout << "Countdown: ";
    for (int i = timeRemaining; i >= 0; --i) {
        cout << i << " ";
    }
    cout << endl;
    if (light == 'R') {
        cout << "GREEN light activated for 45 seconds" << endl;
        cout << "Next: YELLOW light will activate after 45 seconds" << endl;
    } else if (light == 'G') {
        cout << "YELLOW light activated for 5 seconds" << endl;
        cout << "Next: RED light will activate after 5 seconds" << endl;
    } else if (light == 'Y') {
        cout << "RED light activated for 30 seconds" << endl;
        cout << "Next: GREEN light will activate after 30 seconds" << endl;
    }

    return 0;
}
