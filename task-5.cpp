#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 3;

    // Lambda capturing x and y by value
    auto calculate = [x, y]() {
        cout << "Sum = " << x + y << endl;
        cout << "Product = " << x * y << endl;
    };

    // Calling the lambda
    calculate();

    return 0;
}