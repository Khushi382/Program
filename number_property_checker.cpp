#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "\nNumber Analysis for " << number << ":" << endl;
    if (number % 2 == 0)
        cout << "Even: Yes" << endl;
    else
        cout << "Even: No" << endl;

    if (number > 0)
        cout << "Positive: Yes" << endl;
    else
        cout << "Positive: No" << endl;

    if (number % 3 == 0)
        cout << "Divisible by 3: Yes" << endl;
    else
        cout << "Divisible by 3: No" << endl;

    
    if (number % 5 == 0)
        cout << "Divisible by 5: Yes" << endl;
    else
        cout << "Divisible by 5: No" << endl;

    
    if (number % 3 == 0 && number % 5 == 0)
        cout << "Divisible by both 3 and 5: Yes" << endl;
    else
        cout << "Divisible by both 3 and 5: No" << endl;

    if (number >= -9 && number <= 9)
        cout << "Single digit: Yes" << endl;
    else
        cout << "Single digit: No" << endl;

    return 0;
}
