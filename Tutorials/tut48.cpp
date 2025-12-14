/*
------------------------------------------------------------
Topic: Priority between Normal Function and Function Template

What I have learned from this program:

1. When both a normal function and a function template
   are available with the same function name, the compiler
   compares their matches.

2. If an exact match exists for a normal (non-template)
   function, it is given higher priority.

3. Function templates are considered only when no suitable
   normal function is found.

4. This rule avoids unnecessary template instantiation.

5. Template functions can be explicitly called using:
      functionName<>(arguments);

------------------------------------------------------------
*/

#include <iostream>
using namespace std;

// Normal function
void show(int a)
{
    cout << "Normal function called: " << a << endl;
}

// Function template
template <class T>
void show(T a)
{
    cout << "Template function called: " << a << endl;
}

int main()
{
    show(10);     // Normal function is selected (exact match)
    show(5.5);    // Template function is selected

    // Force template call
    show<>(10);

    return 0;
}
