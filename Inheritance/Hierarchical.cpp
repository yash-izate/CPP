#include<iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "This is the Base class" << endl;
    }
};

class Derived1 : public Base {
};

class Derived2 : public Base {
};

int main() {
    Derived1 obj1;
    Derived2 obj2;

    obj1.show();
    obj2.show();
    return 0;
}
