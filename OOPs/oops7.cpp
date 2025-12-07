/* Program for types of constructors-
1) Constructors —
A constructor is a special function with the same name as the class.
It is called automatically when an object is created.
Used to initialize data members of a class.

2) Parameterized Constructor —
A constructor that takes parameters.
Used to initialize objects with user-given values.
Helps avoid separate setter functions.

3) Copy Constructor —
A constructor that creates a new object using an existing object.
Syntax: ClassName(const ClassName &obj)
Used in object copying, function returning objects, passing objects by value.

4) Dynamic Constructor —
A constructor that uses the new operator to allocate memory dynamically.
Useful when the size is not known at compile time.
Memory must be freed in destructor using delete.
*/

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    int *marks;          //dynamic allocation

public:
    // Default Constructor
    Student()
    {
        name = "----";
        rollNo = 0;
        marks = new int(0);
    }

    // Parameterized Constructor
    Student(string n, int r, int m)
    {
        name = n;
        rollNo = r;
        marks = new int(m);
    }

    // Copy Constructor
    Student(const Student &st)
    {
        name = st.name;
        rollNo = st.rollNo;
        marks = new int(*st.marks); // deep copy
    }

    void display()
    {
        cout << "Roll: " << rollNo
             << ", Name: " << name
             << ", Marks: " << *marks << endl;
    }
};

int main()
{
    Student s1;                // Default constructor
    Student s2("Yash", 2, 90); // Parameterized constructor
    Student s3(s2);            // Copy constructor

    cout << "Default Constructor Object: \n";
    s1.display();

    cout << "Parameterized Constructor Object: \n";
    s2.display();

    cout << "Copy Constructor Object: \n";
    s3.display();

    return 0;

    return 0;
}