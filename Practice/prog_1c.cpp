// program to swap two numbers using XOR (bitwise) swap

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    cout << "Before Swapping: A = " << a << " and B = " << b << endl;

    // XOR Swap Logic
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After Swapping: A = " << a << " and B = " << b << endl;

    return 0;
}
