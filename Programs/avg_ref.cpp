/* Program to calculate average of two numbers using call by reference.
 */

#include <iostream>
using namespace std;

float avg(float &x, float &y)
{
    float average = (x + y) / 2;
    return average;
}

int main()
{
    float a, b;

    cout << "Enter first number (a): ";
    cin >> a;

    cout << "Enter second number (b): ";
    cin >> b;

    float result = avg(a, b);

    cout << "Average (a,b) = " << result << endl;

    return 0;
}