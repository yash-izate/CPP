// Multiple Inheritance

#include <iostream>
using namespace std;

// First base class
class Base1 {
protected:
    int base1Value;
public:
    Base1() {
        base1Value = 10;
    }
    void display1() {
        cout << "Value from Base1: " << base1Value << endl;
    }
};

// Second base class
class Base2 {
protected:
    int base2Value;
public:
    Base2() {
        base2Value = 20;
    }
    void display2() {
        cout << "Value from Base2: " << base2Value << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void sum() {
        cout << "Sum of values: " << base1Value + base2Value << endl;
    }
    void display() {
        display1();
        display2();
        sum();
    }
};

int main() {
    Derived d;
    cout << "Demonstrating Multiple Inheritance:" << endl;
    d.display();

    return 0;
}