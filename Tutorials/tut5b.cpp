/* Call by Value -
A copy of the actual variable is passed to the function.
Changes made inside the function do NOT affect the original variable. */

/* Call by Reference -
The address of the variable is passed to the function.
Changes made inside the function directly affect the original variable.

Reference can be done in two ways:

Using pointers

Using reference variables (int &x).  */

#include <iostream>
using namespace std;

// 1. Call by Value
void swapValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapValue: x = " << x << ", y = " << y << endl;
}

// 2. Call by Reference using Pointers
void swapPointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// 3. Call by Reference using Reference Variables
void swapReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10, b = 20;

    cout << "Original: a = " << a << ", b = " << b << endl
         << endl;

    // Call by Value
    swapValue(a, b);
    cout << "After swapValue: a = " << a << ", b = " << b << endl
         << endl;

    // Call by Reference (Pointer)
    swapPointer(&a, &b);
    cout << "After swapPointer: a = " << a << ", b = " << b << endl
         << endl;

    // Call by Reference (Reference variable)
    swapReference(a, b);
    cout << "After swapReference: a = " << a << ", b = " << b << endl;

    return 0;
}
