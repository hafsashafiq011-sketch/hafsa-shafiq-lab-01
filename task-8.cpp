#include <iostream>
using namespace std;

// Function to accumulate values
int accumulate(int value) {
    static int total = 0; // static variable to store running total
    total += value;       // add current value to total
    return total;         // return updated total
}

int main() {
    cout << "After adding 10: " << accumulate(10) << endl;
    cout << "After adding 25: " << accumulate(25) << endl;
    cout << "After adding 5: " << accumulate(5) << endl;

    return 0;
}