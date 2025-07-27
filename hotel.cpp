#include <iostream>
#include <string>
using namespace std;

const int FLOORS = 10;
const int ROOMS_PER_FLOOR = 20;

// Room status: 0 = Available, 1 = Occupied, 2 = Maintenance
int roomStatus[FLOORS][ROOMS_PER_FLOOR];

// Prices for room types
const double PRICE_SINGLE = 100.0;
const double PRICE_DOUBLE = 150.0;
const double PRICE_SUITE  = 300.0;

// Initialize all rooms as available (0)
void initializeRooms() {
    for (int f = 0; f < FLOORS; f++) {
        for (int r = 0; r < ROOMS_PER_FLOOR; r++) {
            roomStatus[f][r] = 0;
        }
    }
}

// Show room status (A=Available, O=Occupied, M=Maintenance)
void displayRoomStatus() {
    cout << "\nRoom Status (Floor x Room):\n";
    for (int f = 0; f < FLOORS; f++) {
        cout << "Floor " << (f + 1) << ": ";
        for (int r = 0; r < ROOMS_PER_FLOOR; r++) {
            char c = 'A';
            if (roomStatus[f][r] == 1) c = 'O';
            else if (roomStatus[f][r] == 2) c = 'M';
            cout << c;
        }
        cout << "\n";
    }
}

// Find an available room number for the requested room type
// Room type floors: Singles(1-6), Doubles(7-9), Suites(10)
int findAvailableRoom(int roomType) {
    int startFloor, endFloor;
    switch(roomType) {
        case 1: startFloor = 0; endFloor = 5; break;
        case 2: startFloor = 6; endFloor = 8; break;
        case 3: startFloor = 9; endFloor = 9; break;
        default: return -1;
    }
    for (int f = startFloor; f <= endFloor; f++) {
        for (int r = 0; r < ROOMS_PER_FLOOR; r++) {
            if (roomStatus[f][r] == 0) {
                return (f + 1) * 100 + (r + 1);  // Room number like 101, 205 etc.
            }
        }
    }
    return -1;  // No room available
}

// Calculate price (ignoring weekend/season for simplicity)
double calculatePrice(int roomType, int nights) {
    double pricePerNight = 0;
    switch(roomType) {
        case 1: pricePerNight = PRICE_SINGLE; break;
        case 2: pricePerNight = PRICE_DOUBLE; break;
        case 3: pricePerNight = PRICE_SUITE; break;
        default: pricePerNight = 0; break;
    }
    return pricePerNight * nights;
}

// Make reservation: find a room, mark occupied
void makeReservation() {
    int roomType, nights;
    cout << "\nRoom Types:\n1. Single ($100/night)\n2. Double ($150/night)\n3. Suite ($300/night)\n";
    cout << "Select room type: ";
    cin >> roomType;

    cout << "Enter number of nights: ";
    cin >> nights;

    int roomNum = findAvailableRoom(roomType);
    if (roomNum == -1) {
        cout << "Sorry, no rooms available for selected type.\n";
        return;
    }
    cout << "Room " << roomNum << " is available.\n";

    double totalPrice = calculatePrice(roomType, nights);
    cout << "Total price: $" << totalPrice << "\n";

    char confirm;
    cout << "Confirm reservation? (Y/N): ";
    cin >> confirm;
    if (confirm == 'Y' || confirm == 'y') {
        int floor = roomNum / 100 - 1;
        int room = roomNum % 100 - 1;
        roomStatus[floor][room] = 1;  // Mark room as occupied
        cout << "Reservation confirmed! Room " << roomNum << " booked for " << nights << " nights.\n";
    } else {
        cout << "Reservation cancelled.\n";
    }
}

// Main menu
int main() {
    initializeRooms();

    int choice;
    do {
        cout << "\n===== HOTEL RESERVATION SYSTEM =====\n";
        cout << "1. View Room Status\n";
        cout << "2. Make Reservation\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: displayRoomStatus(); break;
            case 2: makeReservation(); break;
            case 3: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice.\n"; break;
        }
    } while (choice != 3);

    return 0;
}
