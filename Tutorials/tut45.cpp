/*
------------------------------------------------------------
Topic: Class Templates with Default Parameters in C++

What I have learned from this program:

1. Class templates can have default data types for
   template parameters.

2. If the user does not specify a data type while creating
   an object, the default data type is used.

3. Default template parameters make templates more flexible
   and easier to use.

4. User can override the default data type by explicitly
   providing a type while creating an object.

5. This concept reduces complexity when common data types
   are frequently used.

------------------------------------------------------------
*/

#include <iostream>
#include <string>
using namespace std;

// Class Template with Default Parameters
template <class T1 = int, class T2 = float>
class MyClass
{
    T1 data1;
    T2 data2;

public:
    MyClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << "Data1: " << data1 << endl;
        cout << "Data2: " << data2 << endl;
        cout << endl;
    }
};

int main()
{
    // Uses default template parameters (int, float)
    MyClass<> obj1(10, 5.5);
    obj1.display();

    // Overrides default parameters
    MyClass<double, string> obj2(3.14, "PI");
    obj2.display();

    return 0;
}
