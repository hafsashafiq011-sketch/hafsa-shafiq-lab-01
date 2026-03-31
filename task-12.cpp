#include <iostream>
using namespace std;

// Overloaded functions
void printType(int x) {
    cout << "Data type is: int" << endl;
}

void printType(double x) {
    cout << "Data type is: double" << endl;
}

void printType(char x) {
    cout << "Data type is: char" << endl;
}

void printType(string x) {
    cout << "Data type is: string" << endl;
}

int main() {
    // Testing each type
    printType(10);        // int
    printType(3.14);      // double
    printType('A');       // char
    printType("Hello");   // string

    return 0;
}