/*
Definition - A pointer is a variable that stores the memory address of another variable.
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int *ptr = &a; // pointer pointing to a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer ptr: " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}
