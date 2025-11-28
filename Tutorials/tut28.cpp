// Ambiguity Error

#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Aap kaise ho?" << endl;
    }
};

class Derived : public Base1, Base2
{
    int a;

public:
    void greet()
    {
        // Solution to fix ambiguity error

        Base1::greet(); // or Base2::greet(); depending on which you want
    }
};

int main()
{
    Base1 o1;
    o1.greet();

    Base2 o2;
    o2.greet();

    Derived d;
    d.greet(); // Ambiguity Error

    return 0;
}

/*If we built a new say function in derived
then no ambuigity error because derived class
greet function will override the greet function of base1 or base 2 */