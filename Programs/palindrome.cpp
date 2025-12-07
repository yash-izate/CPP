/* Program for palindrome-
A palindrome is a word, number, or sequence that reads the same forwards and backwards.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int temp = n;
    int rev = 0;

    while (temp > 0)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    (n == rev) ? cout << "Palindrome" << endl : cout << "Not Palindrome"<<endl;

    return 0;
}