/* Program for armstrong number - An Armstrong number (also called narcissistic number) is a number
that is equal to the sum of the cubes of its digits (for 3-digit numbers).
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int temp = n;
    int sum = 0;
    int digits = 0;

    // Count digits
    int t = n;
    while (t > 0) {
        digits++;
        t /= 10;
    }

    // Sum of digits raised to power of digits
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    (sum == n) ? cout << "Armstrong" << endl : cout << "Not Armstrong" << endl;

    return 0;
}
