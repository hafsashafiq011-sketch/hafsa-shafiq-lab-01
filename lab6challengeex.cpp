#include <iostream>
using namespace std;

// 1. PublisherInfo struct
struct PublisherInfo {
    string name;
    int year;
};

// 2. Book class
class Book {
private:
    string title;
    string author;
    double price;
    PublisherInfo publisher;
    bool available;
    static int totalBooks;

public:
    // Default constructor
    Book() : title("Unknown"), author("Unknown"), price(1.0), available(true) {
        publisher = {"Unknown", 0};
        totalBooks++;
    }

    // Constructor without publisher
    Book(string t, string a, double p) : title(t), author(a), available(true) {
        publisher = {"Unknown", 0};
        setPrice(p);  // validated
        totalBooks++;
    }

    // Constructor with full info
    Book(string t, string a, double p, PublisherInfo pub) : title(t), author(a), publisher(pub), available(true) {
        setPrice(p);  // validated
        totalBooks++;
    }

    // Setter with validation
    void setPrice(double p) {
        if (p <= 0) {
            cout << "Error: Price must be greater than 0. Price not set." << endl;
        } else {
            price = p;
        }
    }

    // Const getters
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    double getPrice() const { return price; }
    bool isAvailable() const { return available; }

    // Checkout function
    void checkOut() {
        if (!available) {
            cout << "Error: \"" << title << "\" is already checked out." << endl;
        } else {
            available = false;
            cout << "\"" << title << "\" has been checked out." << endl;
        }
    }

    // Return book
    void returnBook() {
        available = true;
        cout << "\"" << title << "\" has been returned." << endl;
    }

    // Display book info
    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "Publisher: " << publisher.name << ", Year: " << publisher.year << endl;
        cout << "Availability: " << (available ? "On shelf" : "Checked out") << endl;
        cout << "---------------------------" << endl;
    }

    // Static function to show total books
    static void showTotal() {
        cout << "Total books created: " << totalBooks << endl;
    }
};

// Initialize static member
int Book::totalBooks = 0;

// 3. Standalone function: cheapest book
Book cheapest(Book a, Book b) {
    if (a.getPrice() <= b.getPrice()) {
        return a;
    } else {
        return b;
    }
}

// 4. Main function
int main() {
    // a. Create 3 books using different constructors
    Book b1; // default
    Book b2("1984", "George Orwell", 15.99); // no publisher
    PublisherInfo pub = {"Penguin", 2020};
    Book b3("The Alchemist", "Paulo Coelho", 12.50, pub); // full

    // b. Try setting invalid price
    b2.setPrice(-5);  // rejected

    // c. Display all 3 books
    b1.display();
    b2.display();
    b3.display();

    // d. Checkout one book
    b3.checkOut();
    b3.checkOut();  // try again, error

    // e. Return the book, checkout again
    b3.returnBook();
    b3.checkOut(); // now succeeds

    // f. Find the cheapest book
    Book cheapBook = cheapest(b2, b3);
    cout << "Cheaper book between b2 and b3:" << endl;
    cheapBook.display();

    // g. Print total books
    Book::showTotal();

    return 0;
}