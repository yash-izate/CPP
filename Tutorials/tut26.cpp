// Multilevel Inheritance

#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;

public:
    void set_rollNo(int);
    void get_rollNo(void);
};

void Student ::set_rollNo(int r)
{
    rollNo = r;
}

void Student ::get_rollNo()
{
    cout << "The roll no is " << rollNo << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_rollNo();
        get_marks();

        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result yash;

    yash.set_rollNo(68);
    yash.set_marks(85.5, 92.7);
    yash.display();

    return 0;
}