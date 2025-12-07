// Return by reference

#include <iostream>
using namespace std;

// int result; make global variable  or  use static so that variable does not get destroyed after function ends

int &add(int x, int y)
{
    static int result;
    result = x + y;
    return result;
}

int main()
{
    int a = 5, b = 10;

    int &sum = add(a, b);

    cout << "Sum: " << sum;

    return 0;
}