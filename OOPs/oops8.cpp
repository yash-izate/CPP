// Bank Account

#include <iostream>
using namespace std;

class Bank
{
private:
    string accName;
    int accNo;
    double accBal;

public:
    Bank(string n, int a, double b)
    {
        accName = n;
        accNo = a;
        accBal = b;
    }

    // deposit function
    void deposit(double amount)
    {
        if (amount > 0)
        {
            accBal += amount;
            cout << "Amount deposited successfully!" << endl;
        }
        else
        {
            cout << "Invalid Amount!" << endl;
        }
    }

    // withdraw function
    void withdraw(double amount)
    {
        if (amount > accBal)
        {
            cout << "Insufficient Balance!" << endl;
        }
        else if (amount <= 0)
        {
            cout << "Invalid Amount!" << endl;
        }
        else
        {
            accBal -= amount;
            cout << "Amount withdrawn successfully!" << endl;
        }
    }

    // account details
    void display()
    {
        cout << "\n------------- Account Details -------------" << endl;
        cout << "Account Holder: " << accName << endl;
        cout << " Account Number: " << accNo << endl;
        cout << "Account Balance: Rs." << accBal << endl;
        cout << "-------------------------------------------" << endl;
    }
};

int main()
{
    Bank acc("Yash Izate", 4006123, 10000);

    int choice;
    double amt;

    do
    {
        cout << "\n-------------- Bank Menu ---------------" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Show Account Details" << endl;
        cout << "4. Exit" << endl;

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amt;
            acc.deposit(amt);
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amt;
            acc.withdraw(amt);
            break;

        case 3:
            acc.display();
            break;

        case 4:
            cout << "Exiting...... Thank You!" << endl;
            break;
        default:
            cout << "Invalid Choice! Try again...\n"
                 << endl;
        };

    } while (choice != 4);

    return 0;
}