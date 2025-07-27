#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Items and prices
    string items[] = {"Chips", "Soda", "Candy", "Water"};
    double prices[] = {2.50, 1.75, 1.25, 1.00};
    int n = 4;

    int choice;
    cout << fixed << setprecision(2);

    do {
        // Show menu
        cout << "\n===== VENDING MACHINE =====\n";
        for (int i = 0; i < n; i++) {
            cout << (i + 1) << ". " << items[i] << " - $" << prices[i] << endl;
        }
        cout << (n + 1) << ". Exit\n";

        cout << "Select item: ";
        cin >> choice;

        if (choice == n + 1) {
            cout << "Goodbye!\n";
            break;
        }

        if (choice < 1 || choice > n) {
            cout << "Invalid choice, try again.\n";
            continue;
        }

        double price = prices[choice - 1];
        cout << "Selected: " << items[choice - 1] << " ($" << price << ")\n";

        double inserted = 0, amount;

        do {
            cout << "Insert money (enter 0 when done):\n";
            cout << "Enter amount: ";
            cin >> amount;
            if (amount < 0) {
                cout << "Invalid amount, try again.\n";
                continue;
            }

            inserted += amount;

            if (inserted < price) {
                cout << "Total inserted: $" << inserted << " (Need $" << price - inserted << " more)\n";
            }

        } while (inserted < price);

        cout << "Dispensing: " << items[choice - 1] << endl;

        double change = inserted - price;
        if (change > 0) {
            cout << "Change: $" << change << endl;
        }

        cout << "Thank you!\n";

    } while (true);

    return 0;
}
