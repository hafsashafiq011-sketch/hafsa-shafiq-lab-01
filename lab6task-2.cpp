#include <iostream>
using namespace std;

// Book class definition
class Book {
public:
    string title;
    string author;
    double price;

    // Constructor
    Book(string t = "", string a = "", double p = 0.0) {
        title = t;
        author = a;
        price = p;
    }

    // Function to display book details
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "-----------------------" << endl;
    }
};

int main() {
    // Creating an array of 3 Book objects
    Book books[3] = {
        Book("The Alchemist", "Paulo Coelho", 12.99),
        Book("1984", "George Orwell", 9.99),
        Book("To Kill a Mockingbird", "Harper Lee", 14.50)
    };

    // Loop to print details of each book
    for (int i = 0; i < 3; i++) {
        books[i].display();
    }

    return 0;
}