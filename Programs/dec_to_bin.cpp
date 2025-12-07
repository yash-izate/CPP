#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter decimal number: ";
    cin >> decimal;

    int num = decimal;
    int binary = 0, place = 1;
    int rem;

    while (num > 0) {
        rem = num % 2;           // get remainder
        binary = binary + rem * place;  // build binary number
        place = place * 10;      // shift place
        num = num / 2;           // reduce number
    }

    cout << "Binary equivalent = " << binary;

    return 0;
}
