/* Write a program in C++ to add two given
numbers usingthe  function add(). Pass the
argument using
1) value
2) pointer
3) reference Variable
*/

#include <iostream>
using namespace std;

// call by value
int add_Value(int x, int y)
{
    return x + y;
}

// call by ref
int add_Reference(int &x, int &y)
{
    return x + y;
}

// call by pointer
int add_Pointer(int *x, int *y)
{
    return *x + *y;
}

int main()
{
    int a = 10, b = 5;

    cout << "1. Add By Value = " << add_Value(a, b) << endl;
    cout << "2. Add By Reference = " << add_Reference(a, b) << endl;
    cout << "3. Add By Pointer = " << add_Pointer(&a, &b) << endl;

    return 0;
}