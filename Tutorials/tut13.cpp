/* Friend Function in cpp - A friend function is a non-member function that is granted access to the private and protected members of a class.

// Friend function helps the function to access private data of the class
// It act as a permission of the class to access its private data
 -----------------------------------------------------------------------------
 # Properties of the friend function:

 1. Not in the scope of class
 2. Thats why it cannot be called from the object of that class
 3. Can be invoked without the help of any opbject
 4. Usually contains the arguments as objects
 5. Can be declared inside public or private section of the class, doesn't matter.
 6. It cannot access the members directly by their name and need the dot operator (obj_name.member_name)
*/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your complex number is ( " << a << " + " << b << " i )" << endl;
    }

    friend Complex sumComplex(Complex, Complex); // Friend function
};

Complex sumComplex(Complex obj1, Complex obj2)
{
    Complex obj3;

    obj3.setNumber(obj1.a + obj2.a, obj1.b + obj2.b);
    return obj3;
}

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(3, 5);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}