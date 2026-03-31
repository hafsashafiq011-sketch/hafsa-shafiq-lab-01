#include <iostream>
using namespace std;

// Person class
class Person {
public:
    string name;
    int age;

    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
    }

    // Constructor with only name
    Person(string n) {
        name = n;
        age = 0;
    }

    // Constructor with name and age
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Function to display details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating objects using different constructors
    Person p1;               // default constructor
    Person p2("Alice");      // constructor with name
    Person p3("Bob", 25);    // constructor with name and age

    // Display details
    p1.display();
    p2.display();
    p3.display();

    return 0;
}