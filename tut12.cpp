// Passing objects as Function Arguments

#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(Complex obj1, Complex obj2)
    {
        a = obj1.a + obj2.a;
        b = obj1.b + obj2.b;
    }

    void display()
    {
        cout << "Your complex number is " << a << " + " << b << "j." << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setData(1, 2);
    c1.display();

    c2.setData(2, 3);
    c2.display();

    c3.setDataBySum(c1, c2);
    c3.display();
    return 0;
}