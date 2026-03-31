#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes
int calculate(int, int, char);
double calculate(double, double, char);
double power(double base, int exp);
void total_calc();

// Static counter function
void total_calc() {
    static int count = 0; // static variable
    count++;
    cout << "Calculation count: " << count << endl;
}

// Overloaded function for int
int calculate(int a, int b, char op) {
    total_calc();
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 0;
        default: return 0;
    }
}

// Overloaded function for double
double calculate(double a, double b, char op) {
    total_calc();
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 0;
        default: return 0;
    }
}

// Recursive power function
double power(double base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    // Lambda for absolute difference
    auto absDiff = [](double x, double y) {
        cout << "Absolute difference: " << fabs(x - y) << endl;
    };

    // Using calculate functions
    cout << "Int Addition: " << calculate(5, 3, '+') << endl;
    cout << "Double Multiplication: " << calculate(2.5, 4.0, '*') << endl;

    // Using recursive power
    cout << "Power(2, 3): " << power(2, 3) << endl;

    // Using lambda
    absDiff(10, 4);

    return 0;
}