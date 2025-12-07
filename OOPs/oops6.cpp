//Constructor called and Destructor called example

#include <iostream>
using namespace std;

class Demo {
public:
    Demo()      // Constructor
    {
        cout << "Constructor called!" << endl;
    }

    ~Demo()     // Destructor
    {
        cout << "Destructor called!" << endl;
    }
};

void show()
{
    cout << "Inside function show()" << endl;
    Demo d2;  // Local object inside function
    cout << "Exiting function show()" << endl;
}   // d2 destroyed here

int main()
{
    cout << "Inside main()" << endl;

    Demo d1;  // Constructor for d1

    // -------- Block Scope Example --------
    {
        cout << "Inside block" << endl;
        Demo d3;  // Constructor for block object
        cout << "Exiting block" << endl;
    } // d3 destroyed here
    // -------------------------------------

    show();   // Function call

    cout << "Back in main()" << endl;

    return 0;
} // d1 destroyed here
