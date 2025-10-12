// Dynamic Initialization of Objects Using Constructors

#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() // Implementing default constructor
    {
        principal = 0;
        years = 0;
        interestRate = 0;
        returnValue = 0;
    }
    BankDeposit(int p, int y, int r);
    BankDeposit(int p, int y, float r);

    void show();
};

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r / 100; // Convert percentage to decimal
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << "-----------------------Bank Display-----------------------" << endl;
    cout << "Principal amount = " << principal << endl;
    cout << "Time Period = " << years << " years" << endl;
    cout << "Rate of interest = " << interestRate << endl;
    cout << "Total amount (with interest) = " << returnValue << endl;
}

int main()
{
    int p, y, R;
    float r;

    cout << "Principal amount = ";
    cin >> p;
    cout << "Time Period (in years) = ";
    cin >> y;
    cout << "Rate of interest = ";
    cin >> r;

    BankDeposit bd(p, y, r);
    bd.show();

    return 0;
}