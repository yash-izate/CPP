/* Copy Constructor -

A copy constructor in C++ is a special constructor that is used to create a new object as a copy of an existing object.

It defines how an object should be copied when:

You initialize one object from another of the same class.

You pass an object by value to a function.

You return an object by value from a function.
*/

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    //  when no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy Constructor Called !" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y(10), z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);
    z1.display(); // z1 should resemble x or y or z

    z2 = z;
    Number z3 = z;
    z3.display();
    return 0;
}