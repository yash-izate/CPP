// Friend function example 

/*A friend function can access private data of a class even though it is not a member of that class.*/

#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    int marks;

public:
    // function to set data
    void setData(int r, int m)
    {
        rollNo = r;
        marks = m;
    }

    // friend function declaration
    friend void showStudent(Student s);
};

// friend function definition
void showStudent(Student s)
{
    // can access private members
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Marks : " << s.marks << endl;
}

int main()
{
    Student s1;
    s1.setData(10, 95);

    showStudent(s1);   // calling friend function

    return 0;
}
