#include<iostream>
using namespace std;

// Base class
class Base {
private:
    int a = 10;         // Only accessible inside Base
protected:
    int b = 20;         // Accessible in Derived and Child
public:
    int c = 30;         // Accessible everywhere

    void showBase() {
        cout << "This is Base class" << endl;
        cout << "a = " << a << endl;   // Private, allowed inside Base
        cout << "b = " << b << endl;   // Protected, allowed inside Base
        cout << "c = " << c << endl;   // Public, allowed
    }
};

// Derived class
class Derived : public Base {
public:
    void showDerived() {
        cout << "This is Derived class" << endl;
        // a is private, not accessible here
        cout << "b = " << b << endl;   // Protected, accessible
        cout << "c = " << c << endl;   // Public, accessible
    }
};

// Child class
class Child : public Derived {
public:
    void showChild() {
        cout << "This is Child class" << endl;
        cout << "b = " << b << endl;   // Protected, accessible
        cout << "c = " << c << endl;   // Public, accessible
    }
};

int main() {
    Child obj;
    obj.showBase();     // Call from Base class
    obj.showDerived();  // Call from Derived class
    obj.showChild();    // Call from Child class
    return 0;
}
