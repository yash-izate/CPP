#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Decimal Number: ";
    cin >> n;

    int temp = n;
    int rev = 0;        // store reversed binary
    int binary = 0;     // final correct binary

    // Step 1: Convert decimal to reversed binary
    while (temp > 0) {
        int rem = temp % 2;       // remainder gives bit
        rev = rev * 10 + rem;     // build reversed binary
        temp = temp / 2;          // reduce number
    }

    // Step 2: Reverse again to get correct binary
    while (rev > 0) {
        int digit = rev % 10;
        binary = binary * 10 + digit;
        rev = rev / 10;
    }

    cout << "Binary Number = " << binary;

    return 0;
}
