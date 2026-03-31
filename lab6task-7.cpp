#include <iostream>
using namespace std;

class Sensor {
private:
    int id;                       // unique ID for each sensor
    static int totalSensors;      // static member to count sensors

public:
    // Constructor
    Sensor() {
        totalSensors++;           // increment total sensors
        id = totalSensors;        // assign ID based on count
    }

    // Function to get sensor ID
    int getID() {
        return id;
    }

    // Function to get total sensors
    static int getTotalSensors() {
        return totalSensors;
    }
};

// Initialize static member
int Sensor::totalSensors = 0;

int main() {
    // Create 4 Sensor objects
    Sensor s1, s2, s3, s4;

    // Print each sensor's ID
    cout << "Sensor 1 ID: " << s1.getID() << endl;
    cout << "Sensor 2 ID: " << s2.getID() << endl;
    cout << "Sensor 3 ID: " << s3.getID() << endl;
    cout << "Sensor 4 ID: " << s4.getID() << endl;

    // Print total number of sensors
    cout << "Total sensors created: " << Sensor::getTotalSensors() << endl;

    return 0;
}