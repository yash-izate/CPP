#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base-Show" << endl;
    }
};

class Derived1 : public Base {
public:
    void fun() {
        cout << "Derived 1 Fun" << endl;
    }
};

class Derived2 : public Base {
public:
    void gun() {
        cout << "Derived 2 Gun" << endl;
    }
};

class Child : public Derived1, public Derived2 {
public:
    void display() {
        cout << "Child Display" << endl;
    }
};

int main() {
    Child C;
    C.display();
    C.gun();
    C.fun();
    return 0;
}
