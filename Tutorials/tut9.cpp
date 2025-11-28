// Memory Allocation using Arrays

#include <iostream>
using namespace std;

class Shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter() { counter = 0; };
    void setPrice();
    void displayPrice();
} dukan; // object is created directly

void Shop ::setPrice()
{
    cout << "Enter Id of your item no. " << counter + 1 << " : " << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item: " << endl;
    cin >> itemPrice[counter];

    counter++;
}

void Shop ::displayPrice()
{
    cout << "--------------------------------------------------------" << endl;

    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Item with Id " << itemId[i] << " is " << itemPrice[i] << "." << endl;
    }
}

int main()
{
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}