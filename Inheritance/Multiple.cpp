#include<iostream>
using namespace std;

class Base1 {
public:
    void show1() {
        cout << "This is the Base1 class" << endl;
    }
};

class Base2 {
public:
    void show2() {
        cout << "This is the Base2 class" << endl;
    }
};

class Derived : public Base1, public Base2 {
};

int main() {
    Derived obj;
    obj.show1();
    obj.show2();
    return 0;
}
