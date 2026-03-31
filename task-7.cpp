#include <iostream>
using namespace std;

// Function to generate ID
int generateID() {
    static int id = 1000; // static variable initialized once
    id++;                 // increment each time function is called
    return id;
}

int main() {
    // Call function five times
    for(int i = 0; i < 5; i++) {
        cout << "Generated ID: " << generateID() << endl;
    }

    return 0;
}