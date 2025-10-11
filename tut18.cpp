// Parameterized Constructor and Default constructor and constructor overloading

#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    float f;
    char c;
    string s;

public:
    // default constructor
    Complex();

    // Parameterized constructor
    Complex(int, int);
    Complex(int, float);
    Complex(string, char);

    void printNumber()
    {
        cout << "Your complex number is (" << a << " + " << b << "i)." << endl;
    }

    void printFloat()
    {
        cout << "Integer and float values are: " << a << " and " << f << endl;
    }

    void printString()
    {
        cout << "String and char values are: " << s << " and " << c << endl;
    }
};

Complex ::Complex()
{
    a = 0;
    b = 0;
    // Initialize other members with default values
    f = 0.0f;
    c = '\0';
    s = "";
}

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

Complex ::Complex(int x, float y)
{
    a = x;
    f = y;
}

Complex ::Complex(string x, char y)
{
    s = x;
    c = y;
}

int main()
{
    // Using default constructor
    Complex c1;
    cout << "Default constructor:" << endl;
    c1.printNumber();

    // Using parameterized constructor with two integers
    Complex c2(5, 7);
    cout << "\nTwo integer constructor:" << endl;
    c2.printNumber();

    // Using parameterized constructor with int and float
    Complex c3(10, 3.14f);
    cout << "\nInteger and float constructor:" << endl;
    c3.printFloat();

    // Using parameterized constructor with string and char
    Complex c4("Hello", 'A');
    cout << "\nString and char constructor:" << endl;
    c4.printString();

    return 0;
}