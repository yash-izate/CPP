/*
------------------------------------------------------------
Topic: Class Template with Multiple Parameters

What I have learned from this program:

1. Templates can have more than one type parameter.
   - T1 and T2 represent different data types.

2. A class template allows storing multiple data types
   using a single class definition.

3. Constructor is used to initialize template variables.

4. 'this' pointer is used to access class data members.

5. The same template class can create objects of
   different type combinations.

------------------------------------------------------------
*/

#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class MyClass
{
public:
    T1 data1;
    T2 data2;

    MyClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << this->data1 << endl;
        cout << this->data2 << endl;
        cout << endl;
    }
};

int main()
{
    MyClass<int, char> obj1(2, 'c');
    obj1.display();

    MyClass<double, string> obj2((22.0 / 7), "PI");
    obj2.display();

    return 0;
}
