// this is a pointer which invokes the member function

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
        // return *this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{

    A a;
    a.setData(5);
    a.getData();

    return 0;
}