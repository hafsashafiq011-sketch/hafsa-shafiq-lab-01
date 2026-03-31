#include <iostream>
using namespace std;

// Class definition
class Circle {
private:
    double radius; // member variable

public:
    // Constructor to initialize radius
    Circle(double r) {
        radius = r;
    }

    // Function declarations
    double area();
    double circumference();
};

// Function definitions outside the class

double Circle::area() {
    return 3.14159 * radius * radius; // πr²
}

double Circle::circumference() {
    return 2 * 3.14159 * radius; // 2πr
}

int main() {
    Circle c(5.0); // create Circle object with radius 5

    cout << "Area: " << c.area() << endl;
    cout << "Circumference: " << c.circumference() << endl;

    return 0;
}