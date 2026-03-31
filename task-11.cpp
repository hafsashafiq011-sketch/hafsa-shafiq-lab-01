#include <iostream>
using namespace std;

// Area of square
int area(int side) {
    return side * side;
}

// Area of rectangle
int area(int length, int width) {
    return length * width;
}

// Area of circle
double area(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    cout << "Area of square (side = 4): " << area(4) << endl;
    cout << "Area of rectangle (5 x 3): " << area(5, 3) << endl;
    cout << "Area of circle (radius = 2.5): " << area(2.5) << endl;

    return 0;
}