#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    // Constructor
    Temperature(double temp = 0.0) {
        setCelsius(temp); // use setter for validation
    }

    // Setter with validation
    void setCelsius(double temp) {
        if (temp < -273.15) {
            cout << "Error: Temperature below absolute zero is invalid!" << endl;
        } else {
            celsius = temp;
        }
    }

    // Getters
    double getCelsius() const {
        return celsius;
    }

    double getFahrenheit() const {
        return (celsius * 9/5) + 32;
    }

    double getKelvin() const {
        return celsius + 273.15;
    }
};

int main() {
    Temperature t1; // default temperature 0°C

    // Try setting an invalid temperature
    t1.setCelsius(-300); // below absolute zero

    // Set a valid temperature
    t1.setCelsius(25);

    // Print all three scales
    cout << "Celsius: " << t1.getCelsius() << "°C" << endl;
    cout << "Fahrenheit: " << t1.getFahrenheit() << "°F" << endl;
    cout << "Kelvin: " << t1.getKelvin() << "K" << endl;

    return 0;
}