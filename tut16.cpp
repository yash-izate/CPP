// Complex Example of Friend Function

#include <iostream>
using namespace std;

class C2; // Forward Declaration

class C1
{
    int val1;
    friend void swap(C1 &x, C2 &y);

public:
    void setData(int a)
    {
        val1 = a;
    }

    void display()
    {
        cout << val1 << endl;
    }
};

class C2
{
    int val2;
    friend void swap(C1 &x, C2 &y);

public:
    void setData(int a)
    {
        val2 = a;
    }

    void display()
    {
        cout << val2 << endl;
    }
};

void swap(C1 &x, C2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    C1 obj1;
    obj1.setData(10);
    cout << "Before A = ";
    obj1.display();

    C2 obj2;
    obj2.setData(20);
    cout << "Before B = ";
    obj2.display();

    swap(obj1, obj2);

    cout << "-------------------------------------------" << endl;
    
    cout << "After A = ";
    obj1.display();

    cout << "After B = ";
    obj2.display();

    return 0;
}