// Virtual Base Class in cpp

#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;

public:
    void set_rollNo(int a)
    {
        rollNo = a;
    }
    void print_rollNo()
    {
        cout << "Your roll number is " << rollNo << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "\nYour Result is here!" << endl
             << "Maths = " << maths << endl
             << "Physics = " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your P.T. score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_rollNo();
        print_marks();
        print_score();

        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    Result yash;
    yash.set_rollNo(406);
    yash.set_marks(86.3, 96.4);
    yash.set_score(9);
    yash.display();

    return 0;
}