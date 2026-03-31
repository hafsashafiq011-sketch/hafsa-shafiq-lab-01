#include <iostream>
using namespace std;

class MathConstants {
private:
    const double pi;
    const double e;

public:
    // Constructor initializer list
    MathConstants() : pi(3.14159), e(2.71828) {}

    // Const getter functions
    double getPi() const {
        return pi;
    }

    double getE() const {
        return e;
    }
};

int main() {
    const MathConstants math; // const object

    cout << "Pi: " << math.getPi() << endl;
    cout << "Euler's e: " << math.getE() << endl;

    return 0;
}