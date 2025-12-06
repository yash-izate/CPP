/*
Definition - A pointer is a variable that stores the memory address of another variable.
*/

//   & - (address of) operator

//  * - (value at) - dereference operator

#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int *ptr = &a; // pointer pointing to a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer ptr: " << ptr << endl;

    // using deference operator - gives which value is present at that address
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}
