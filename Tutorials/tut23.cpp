// Inheritance

#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    
    // Define the default constructor
    Employee() {
        id = 0;
        salary = 0;
    }
    
    Employee(int inId)
    {
        id = inId;
        salary = 35.4;
    }
};

class Programmer : public Employee
{
public:
    int languagecode = 9;

    Programmer(int inpId)
    {
        id = inpId;
        languagecode = 9;  // Remove 'int' to use class member
    }

    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), yash(2);
    cout << "Harry's salary: " << harry.salary << endl;
    
    Programmer skillf(1);
    cout << "Skillf's language code: " << skillf.languagecode << endl;

    return 0;
}