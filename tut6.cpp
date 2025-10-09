// Recursion

#include <iostream>
using namespace std;

int factorial(int n)
{

    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int fibonacci(int n)
{

    if (n < 2)
    {
        return 1;
    }

    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int num;

    cout << "Enter a number: " << endl;
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    cout << "The term in fibonacci sequence at position " << num << " is " << fibonacci(num) << endl;

    return 0;
}