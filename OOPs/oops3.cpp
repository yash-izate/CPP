/* Write a C++ program of operator overloading
to add two complex numbers using addition operators (+).
*/

#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(float x, float y)
    {
        real = x;
        imag = y;
    }

    void display();

    Complex operator+(Complex obj);
};

Complex Complex::operator+(Complex obj)
{
    Complex temp;
    temp.real = real + obj.real;
    temp.imag = imag + obj.imag;
    return temp;
}

void Complex ::display()
{
    cout << real << " + " << imag << "i." << endl;
}

int main()
{
    Complex c1(5, 7), c2(6, 9), c3;

    c3 = c1.operator+(c2);

    cout << "Result Complex: " << endl;
    c3.display();

    return 0;
}