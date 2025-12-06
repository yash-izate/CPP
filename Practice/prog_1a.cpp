// Program to Swap Two Numbers

#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int temp;

    cout << "Before Swapping: A = " << a << " and B = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After Swapping: A = " << a << " and B = " << b << endl;
}