/*
------------------------------------------------------------
Topic: Templates in C++

What I have learned about Templates:

1. Templates are used to write generic programs.
   - Generic means the same code works for different data types.

2. Templates help avoid code duplication.
   - One function or class can be reused for int, float, char, etc.

3. Templates provide type safety.
   - The compiler checks data types at compile time.

4. Types of Templates:
   a) Function Template – used to create generic functions
   b) Class Template – used to create generic classes

5. Syntax of Template:
   template <class T>
   or
   template <typename T>

6. 'T' represents a placeholder for a data type.
   - The compiler replaces T with the actual data type during compilation.

7. Templates support the concept of generic programming in C++.

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

int main()
{
    cout << "Addition of integers: " << add(10, 20) << endl;
    cout << "Addition of floats: " << add(5.5, 4.5) << endl;

    return 0;
}