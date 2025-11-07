#include <iostream>
using namespace std;

// Forward declaration
class Auditor;

class BankAccount {
private:
    string name;
    double balance;
    // Declare Auditor as a friend class
    friend class Auditor; 

public:
    BankAccount(string n, double b) : name(n), balance(b) {}
    void deposit(double amt) { balance += amt; }
    void withdraw(double amt) { balance -= amt; }
};

class Auditor {
public:
    void showAccount(const BankAccount &acc) {
        cout << "Account Holder: " << acc.name << endl;
        cout << "Account Balance: " << acc.balance << endl;
    }
};

int main() {
    BankAccount acc("Alice", 5000.0);
    Auditor official;
    acc.deposit(1200.0);
    acc.withdraw(800.0);

    cout << "Auditor inspecting account..." << endl;
    official.showAccount(acc);
    return 0;
}
