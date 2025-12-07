/*
Scope Resolution Operator (::) in C++

The scope resolution operator :: is used to access global variables when a local variable has the same name.

It can also be used to access class members or functions that belong to a particular namespace or class.

In short, :: tells C++ exactly which scope to use

*/

#include <iostream>
using namespace std;

// a) Global variable
int m = 100;

int main()
{
    // b) Local variable inside main()
    int m = 200;

    cout << "Local variable inside main() = " << m << endl;

    {
        // c) Variable inside inner block
        int m = 300;
        cout << "Variable inside inner block = " << m << endl;
    }

    // Access global variable using scope resolution operator
    cout << "Global variable outside main() = " << ::m << endl;

    return 0;
}
