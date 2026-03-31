#include <iostream>
using namespace std;

// Rectangle class
class Rectangle {
public:
    double length;
    double width;

    // Constructor
    Rectangle(double l = 0, double w = 0) {
        length = l;
        width = w;
    }

    // Function to compute area
    double area() {
        return length * width;
    }
};

// Function to compare two rectangles
void compare(Rectangle a, Rectangle b) {
    double areaA = a.area();
    double areaB = b.area();

    cout << "Area of Rectangle A: " << areaA << endl;
    cout << "Area of Rectangle B: " << areaB << endl;

    if (areaA > areaB) {
        cout << "Rectangle A has a larger area." << endl;
    } else if (areaB > areaA) {
        cout << "Rectangle B has a larger area." << endl;
    } else {
        cout << "Both rectangles have the same area." << endl;
    }
}

int main() {
    Rectangle rect1(5.0, 4.0);  // length=5, width=4
    Rectangle rect2(3.5, 6.0);  // length=3.5, width=6

    compare(rect1, rect2); // Compare the two rectangles

    return 0;
}