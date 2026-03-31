#include <iostream>
using namespace std;

int main() {
    int counter = 0;

    // Lambda capturing counter by reference
    auto increment = [&counter]() {
        counter++;
        cout << "Counter value: " << counter << endl;
    };

    // Calling the lambda three times
    increment();
    increment();
    increment();

    return 0;
}