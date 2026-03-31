#include <iostream>
using namespace std;

// Address struct
struct Address {
    string street;
    string city;
    int postalCode;
};

// Hospital class
class Hospital {
private:
    string name;
    Address location;  // Address as a member

public:
    // Constructor
    Hospital(string n, Address addr) {
        name = n;
        location = addr;
    }

    // Display function
    void display() {
        cout << "Hospital Name: " << name << endl;
        cout << "Street: " << location.street << endl;
        cout << "City: " << location.city << endl;
        cout << "Postal Code: " << location.postalCode << endl;
    }
};

int main() {
    // Create Address object
    Address addr1 = {"123 Main St", "New York", 10001};

    // Create Hospital object
    Hospital h1("City Care Hospital", addr1);

    // Display details
    h1.display();

    return 0;
}