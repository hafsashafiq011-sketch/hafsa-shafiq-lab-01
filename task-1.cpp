#include <iostream>
using namespace std;

// Function prototype (declaration)
int square(int n);

int main() {
    int result;

    result = square(7);   // calling the function

    cout << "Square of 7 is: " << result << endl;

    return 0;
}

// Function definition (after main)
int square(int n) {
    return n * n;
}