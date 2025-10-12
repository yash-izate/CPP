/*Destructor-
 A destructor in C++ is a special member function that is automatically called when an object is destroyed — usually when it goes out of scope or is deleted.

It is mainly used to free resources (like memory, files, or connections) that the object used during its lifetime.

// Properties of Destructor

Destructor name is same as the class name but starts with a tilde (~).
→ Example: ~Student()

Destructor has no return type, not even void.

Destructor takes no arguments (you can’t pass parameters).

Only one destructor is allowed in a class (it cannot be overloaded).

Destructor is automatically called when the object goes out of scope or is deleted.

It is used to free memory and release resources (like closing files or disconnecting databases).

Destructors are called in reverse order of construction (the last object created is destroyed first).

For objects created using new, the destructor runs only when delete is used.

If you don’t define one, the compiler provides a default destructor automatically.

In inheritance, if you use polymorphism, the base class destructor should be virtual to ensure the correct destructor is called.*/

#include <iostream>
using namespace std;

int count = 0;

class Number
{
public:
    Number()
    {
        count++;
        cout << "This is the time when constrtuctor is called for object " << count << endl;
    }

    ~Number()
    {
        cout << "This is the time when my Destrtuctor is called for object " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    Number n1;

    {
        cout << "Entering the block" << endl;
        cout << "Creating two more objects" << endl;
        Number n2, n3;
        cout << "Exiting the block" << endl;
    }

    cout << "Back to main" << endl;

    return 0;
}