// Members declared as public are accessible from anywhere — inside or outside the class.

#include<iostream>
using namespace std;

class Student {
public:
    string name;

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;
    s.name = "Yash";
    s.display();
    return 0;
}
