#include<iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "This is the Base class" << endl;
    }
};

class Derived : public Base {
};

class Child : public Derived {
};

int main() {
    Child obj;
    obj.show();
    return 0;
}
