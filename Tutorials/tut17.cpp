// Constructor - It is a special member function with saame name as of the class.
// It is used to initialize the objects of the class
// It is automatically invoked (call) whenever an object is created.
// It should be declared in the public section of the class
// They cannot return values and do not have return type
// We can not refer to their address

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(); // constructor declaration
    void printNumber()
    {
        cout << "Your complex number is (" << a << " + " << b << "i)." << endl;
    }
};

Complex ::Complex()
{
    a = 2;
    b = 5;
}

int main()
{
    Complex a, b, c;
    a.printNumber();
    b.printNumber();
    c.printNumber();

    return 0;
}