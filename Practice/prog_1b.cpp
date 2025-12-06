// Program to swap two numbers without using 3rd variable

#include <iostream>
using namespace std;

int main()
{

    int a = 120, b = -20;

    cout << "Before Swapping: A = " << a << " and B = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;


    cout << "After Swapping: A = " << a << " and B = " << b << endl;

    return 0;
}