#include <iostream>
using namespace std;

// Recursive power function
int power(int base, int exp) {
    if (exp == 0) return 1;          // base case
    return base * power(base, exp - 1); // recursive case
}

int main() {
    cout << "power(2, 8) = " << power(2, 8) << endl;
    cout << "power(3, 4) = " << power(3, 4) << endl;

    return 0;
}