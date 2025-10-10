// Array of objects 

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    int salary;

public:
    void setId()
    {
        salary = 122;
        cout << "Enter Employee ID: " << endl;
        cin >> id;
    }

    void getId()
    {
        cout << "The Id of the employee is " << id << endl;
    }
};

int main()
{
    Employee fb[5];

    for (int i = 0; i < 5; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}