#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";                              //Last bit is 0= ODD  , Last bit is 1 = EVEN
    cin >> n;

    if (n & 1)
        cout << n << " is Odd";
    else
        cout << n << " is Even";

    return 0;
}
