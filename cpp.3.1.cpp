#include <iostream>
using namespace std;

// BankAccount class definition
class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, int accNum, double initialBalance) {
        accountHolder = name;
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Deposit method
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited ?" << amount << " successfully." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Withdraw method
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew ?" << amount << " successfully." << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    // Display account details
    void display() const {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: ?" << balance << endl;
    }
};

// Main function
int main() {
    // Create a BankAccount object
    BankAccount account("Ravi Kumar", 123456, 5000.0);

    account.display();

    account.deposit(1500.0);
    account.withdraw(2000.0);

    account.display();

    return 0;
}