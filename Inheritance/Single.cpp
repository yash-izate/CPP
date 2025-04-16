// One derived class inherits from one base class.

#include<iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "This is the Base class" << endl;
    }
};

class Derived : public Base {
    public:
        void show() {
            cout << "This is the Derived class" << endl;
        }
};

int main() {
    Derived obj;
    obj.show();
    return 0;
}
