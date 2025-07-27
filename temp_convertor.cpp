#include <iostream>
using namespace std;

class TemperatureConverter {
public:
    double tempC, tempF, tempK;

    void input() {
        double temp;
        char unit;
        cout << "Enter temperature value: ";
        cin >> temp;
        cout << "Enter unit (C/F/K): ";
        cin >> unit;

        if (unit == 'C' || unit == 'c') {
            tempC = temp;
            tempF = (tempC * 9.0 / 5.0) + 32;
            tempK = tempC + 273.15;
        }
        else if (unit == 'F' || unit == 'f') {
            tempF = temp;
            tempC = (tempF - 32) * 5.0 / 9.0;
            tempK = tempC + 273.15;
        }
        else if (unit == 'K' || unit == 'k') {
            tempK = temp;
            tempC = tempK - 273.15;
            tempF = (tempC * 9.0 / 5.0) + 32;
        }
        else {
            cout << "Invalid unit entered.\n";
            tempC = tempF = tempK = 0;
        }
    }

    void display() {
        cout << "Celsius: " << tempC << " °C\n";
        cout << "Fahrenheit: " << tempF << " °F\n";
        cout << "Kelvin: " << tempK << " K\n";
    }
};

int main() {
    TemperatureConverter k;
    k.input();
    k.display();
    return 0;
}
