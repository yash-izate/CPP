/*  Friend Class - A friend class means all member functions of that class can access private/protected members of another class.
*/

#include <iostream>
#include <string>
using namespace std;

// Forward declaration
class Account;

// ---------------------
// Class: Bank
// ---------------------
class Bank {
private:
    string bankName;
    int totalMoney;

public:
    // Simple constructor
    Bank(string name, int total) {
        bankName = name;
        totalMoney = total;
    }

    // Friend function (single)
    friend void showBankDetails(Bank b);

    // Friend function (shared between 2 classes)
    friend void transferMoney(Bank &b, Account &a, int amount);

    // Friend class
    friend class Auditor;
};

// ---------------------
// Class: Account
// ---------------------
class Account {
private:
    string accHolder;
    int balance;

public:
    Account(string holder, int bal) {
        accHolder = holder;
        balance = bal;
    }

    // Common friend function with Bank
    friend void transferMoney(Bank &b, Account &a, int amount);

    // Friend class again
    friend class Auditor;
};

// ---------------------
// Friend Class: Auditor
// ---------------------
class Auditor {
public:
    void auditReport(Bank &b, Account &a) {
        cout << "\n===== AUDIT REPORT =====" << endl;
        cout << "Bank Name: " << b.bankName << endl;
        cout << "Total Bank Money: " << b.totalMoney << endl;
        cout << "Account Holder: " << a.accHolder << endl;
        cout << "Account Balance: " << a.balance << endl;
    }
};

// ---------------------
// Friend Function 1 — Single Class
// ---------------------
void showBankDetails(Bank b) {
    cout << "\n=== BANK DETAILS ===" << endl;
    cout << "Bank Name: " << b.bankName << endl;
    cout << "Total Money: " << b.totalMoney << endl;
}

// ---------------------
// Friend Function 2 — Between Two Classes
// ---------------------
void transferMoney(Bank &b, Account &a, int amount) {
    cout << "\nTransferring " << amount << " from Bank to Account..." << endl;

    if (b.totalMoney >= amount) {
        b.totalMoney -= amount;
        a.balance += amount;
        cout << "Transfer Successful!" << endl;
    } else {
        cout << "Transfer Failed! Not enough money in bank." << endl;
    }
}

// ---------------------
// MAIN FUNCTION
// ---------------------
int main() {
    Bank bank1("SBI Bank", 100000);
    Account acc1("Yash", 5000);
    Auditor audit1;

    // (1) Friend function accessing private data of Bank
    showBankDetails(bank1);

    // (2) Friend function accessing both Bank & Account
    transferMoney(bank1, acc1, 20000);

    // (3) Friend class accessing both Bank & Account
    audit1.auditReport(bank1, acc1);

    return 0;
}
