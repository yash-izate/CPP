// Members declared as protected are not accessible outside the class,
// but they can be accessed in derived classes (via inheritance).

#include<iostream>
using namespace std;

class Parent {
protected:
    int money = 5000;
};

class Child : public Parent {
public:
    void showMoney() {
        cout << "Inherited money: " << money << endl;
    }
};

int main() {
    Child c;
    c.showMoney();   // ✅ Accessed through derived class
    return 0;
}
