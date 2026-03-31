#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    int pin;

public:
    // Constructor
    BankAccount(string accNum, double bal, int p) {
        accountNumber = accNum;
        balance = bal;
        pin = p;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function with PIN verification
    void withdraw(double amount, int enteredPin) {
        if (enteredPin != pin) {
            cout << "Incorrect PIN. Withdrawal denied." << endl;
            return;
        }
        if (amount > balance) {
            cout << "Insufficient balance. Withdrawal denied." << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
    }

    // Get balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    // Create a bank account
    BankAccount myAccount("ACC12345", 500.0, 1234);

    // Test deposit
    myAccount.deposit(200.0);

    // Test withdraw with wrong PIN
    myAccount.withdraw(100.0, 1111);

    // Test withdraw with sufficient balance and correct PIN
    myAccount.withdraw(100.0, 1234);

    // Test withdraw with insufficient balance
    myAccount.withdraw(700.0, 1234);

    // Check balance
    cout << "Final balance: $" << myAccount.getBalance() << endl;

    return 0;
}