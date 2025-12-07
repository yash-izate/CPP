/* Program to convert decimal to binary
 */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter decimal number: ";
    cin >> num;

    if (num == 0)
    {
        cout << "Binary = 0";
        return 0;
    }

    string binary = "";
    int temp = num;

    while (temp > 0)
    {
        binary = to_string(temp % 2) + binary; // add remainder at the front
        temp /= 2;
    }

    cout << "Binary = " << binary;

    return 0;
}
