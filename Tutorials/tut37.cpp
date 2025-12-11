/* Polymorphism - one name, multiple forms.
   Types:
   1. Compile Time Polymorphism  - Function Overloading, Operator Overloading
   2. Run Time Polymorphism      - Virtual Functions
*/

#include <iostream>
using namespace std;

class Base
{
public:
    // Run-time polymorphism (virtual function)
    virtual void show()
    {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base
{
public:
    void show() override   // overriding
    {
        cout << "Derived class show()" << endl;
    }
};

// Compile-time polymorphism: Function Overloading
void print(int x)
{
    cout << "Print int: " << x << endl;
}

void print(double x)
{
    cout << "Print double: " << x << endl;
}

int main()
{
    // ---------- Compile Time Polymorphism ----------
    print(10);      // calls int version
    print(5.5);     // calls double version

    // ---------- Run Time Polymorphism ----------
    Base *ptr;
    Derived d;
    ptr = &d;       // Base pointer -> Derived object
    ptr->show();    // calls Derived class show() (runtime polymorphism)

    return 0;
}
