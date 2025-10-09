// Class - It is a template to create objects.

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float cgpa;

public:
    void setData(string, int, float);
    void getData();
};

void Student ::setData(string a, int b, float c)
{
    name = a;
    rollNo = b;
    cgpa = c;
}

void Student ::getData()
{
    cout << "Name: " << name << endl;
    cout << "Roll no: " << rollNo << endl;
    cout << "CGPA: " << cgpa << endl;
}

int main()
{

    Student s1;

    s1.setData("Yash Izate", 68, 8.65);
    s1.getData();

    return 0;
}