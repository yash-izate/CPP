/*
------------------------------------------------------------
Topic: Member Function Templates & Overloading Template Functions

What I have learned from this program:

1. A member function inside a normal class can be a template.
2. Template functions can work with different data types.
3. Function overloading allows using the same function name
   with different parameter lists.
4. The compiler selects the correct function automatically.

------------------------------------------------------------
*/

#include <iostream>
using namespace std;

class Demo
{
public:
    // Member Function Template
    template <class T>
    void show(T value)
    {
        cout << "Template value: " << value << endl;
    }

    // Overloaded normal member function
    void show(int a, int b)
    {
        cout << "Sum of two integers: " << a + b << endl;
    }
};

int main()
{
    Demo obj;

    // Calls member function template
    obj.show(10);
    obj.show(5.5);

    // Calls overloaded normal function
    obj.show(3, 4);

    return 0;
}
