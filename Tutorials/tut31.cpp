// your code here

#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base 1 Class Constructor Called!" << endl;
    }
    void printData_B1()
    {
        cout << "Value of data 1 = " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base 2 Class Constructor Called!" << endl;
    }
    void printData_B2()
    {
        cout << "Value of data 2 = " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    // assigning values to constructors by different syntax
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {

        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called!" << endl;
    }
    void printData_D()
    {
        cout << "Value of derived 1 = " << derived1 << endl;
        cout << "Value of derived 2 = " << derived2 << endl;
    }
};

int main()
{
    Derived yash(1, 2, 3, 4);
    yash.printData_B1();
    yash.printData_B2();
    yash.printData_D();

    return 0;
}