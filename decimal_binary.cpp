#include <iostream>
using namespace std;

int main()
{
    int n;
    int rem = 0, temp = 0, binary = 0;

    cout << "Enter Decimal Number: ";
    cin >> n;

    // Convert to reversed binary
    while (n > 0)
    {
        rem = n % 2;             // Extract bit
        temp = temp * 10 + rem;  // Store reversed
        n /= 2;                  // Reduce n
    }

    cout << "Reversed: " << temp << endl;

    // Reverse again to get proper binary
    while (temp > 0)
    {
        int digit = temp % 10;
        binary = binary * 10 + digit;
        temp /= 10;
    }

    cout << "Binary Number: " << binary << endl;

    return 0;
}
