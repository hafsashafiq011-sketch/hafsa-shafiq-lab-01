#include <iostream>
using namespace std;

// Box class
class Box {
public:
    double length;
    double width;
    double height;

    // Constructor
    Box(double l = 0, double w = 0, double h = 0) {
        length = l;
        width = w;
        height = h;
    }

    // Function to calculate volume
    double volume() {
        return length * width * height;
    }
};

// Function to return the box with larger volume
Box largerBox(Box a, Box b) {
    if (a.volume() >= b.volume()) {
        return a;
    } else {
        return b;
    }
}

int main() {
    // Create two Box objects
    Box box1(2.0, 3.0, 4.0);   // volume = 24
    Box box2(3.0, 3.0, 3.0);   // volume = 27

    // Find the larger box
    Box bigBox = largerBox(box1, box2);

    // Print dimensions of the larger box
    cout << "The larger box has dimensions:" << endl;
    cout << "Length: " << bigBox.length << endl;
    cout << "Width: " << bigBox.width << endl;
    cout << "Height: " << bigBox.height << endl;

    return 0;
}