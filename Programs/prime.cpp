/* Program to check prime numbers
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    bool isPrime = true;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    (isPrime) ? cout << "Prime" << endl : cout << "not Prime" << endl;

    return 0;
}