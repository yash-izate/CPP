//  Static members of class - Count is the static data member of class Employee
// Static functions has access of others static members and functions only.

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the id: ";
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The Id of this empolyee is " << id << " and its employee number " << count << endl;
        // cout << "Total employee " << count << endl;
    }

    // Static function can only access static members like count
    static void getCount() {
        cout << "The value of count is " << count << endl <<endl;
    }
};

int Employee ::count; // by default value is zero

int main()
{
    Employee yash, ojas, ansh;

    yash.setData();
    yash.getData();
    Employee ::getCount();
    
    ojas.setData();
    ojas.getData();
    Employee ::getCount();
    
    ansh.setData();
    ansh.getData();
    Employee ::getCount();

    return 0;
}