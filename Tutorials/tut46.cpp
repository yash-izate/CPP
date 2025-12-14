/*
------------------------------------------------------------
Topic: C++ Function Templates & Function Templates with Parameters

What I have learned from this program:

1. Function templates allow writing a single function
   that works with different data types.

2. Template parameter <T> acts as a placeholder for a data type.

3. The compiler automatically determines the data type
   during function call (template type deduction).

4. Function templates can accept parameters just like
   normal functions.

5. Function templates reduce code duplication and
   increase reusability.

6. Same function template can be used for int, float,
   double, etc.

------------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Function Template
template <class T>
T add(T a, T b)
{
    return a + b;
}

// Function Template with Parameters
template <class T>
T multiply(T x, T y)
{
    return x * y;
}

int main()
{
    // Function template calls with int
    cout << "Addition (int): " << add(10, 20) << endl;
    cout << "Multiplication (int): " << multiply(5, 4) << endl;

    // Function template calls with float
    cout << "Addition (float): " << add(5.5f, 4.5f) << endl;
    cout << "Multiplication (float): " << multiply(2.5f, 3.0f) << endl;

    return 0;
}
