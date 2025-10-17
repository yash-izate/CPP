// Pointers to objects and arrow operator

#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    void setData(int a, int b)
    {
        real = a;
        imag = b;
    }
    void getData()
    {
        cout << "The real part is  " << real << endl;
        cout << "The imaginary part is " << imag << "j" << endl;
    }
};

int main()
{
    Complex c1;
    // c1.setData(1, 23);
    // c1.getData();

    Complex *ptr = &c1;
    
    (*ptr).setData(3, 5);
    (*ptr).getData();
    
    // arrow operator is exactly same as (*ptr).setData(3, 5);
    ptr->setData(11, 15);
    ptr->getData();
    return 0;
}