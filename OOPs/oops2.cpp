/*Write a c++ program to demonstrate the concept of an array of objects.
Create a class Student with data members rollNo, name, totalMarks.
Accept details for three student and display toppers information.*/

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    float totalMarks;

public:
    void setData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll no: ";
        cin >> rollNo;

        cout << "Enter total marks: ";
        cin >> totalMarks;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nRoll No: " << rollNo;
        cout << "\nTotal Marks: " << totalMarks << endl;
    }
};

int main()
{
    Student s[3];
    int topperIdx = 0;

    cout << "Enter Details of three Student: " << endl;
    for (int i = 0; i <= 2; i++)
    {
        cout << "--------------Student " << i + 1 << "-----------------" << endl;
        s[i].setData();

        if (s[i].totalMarks > s[topperIdx].totalMarks)
        {
            topperIdx = i;
        }
    }

    cout << "\n----------Topper Details---------" << endl;
    s[topperIdx].display();

    return 0;
}