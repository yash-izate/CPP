#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // Arithmetic Operators
    cout << "Arithmetic Operators:\n";
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    // Relational Operators
    cout << "\nRelational Operators:\n";
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: "  << (a > b) << endl;
    cout << "a < b: "  << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // Logical Operators
    cout << "\nLogical Operators:\n";
    cout << "(a > 5 && b < 5): " << (a > 5 && b < 5) << endl;
    cout << "(a < 5 || b < 5): " << (a < 5 || b < 5) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    // Assignment Operators
    cout << "\nAssignment Operators:\n";
    int x = a; 
    cout << "x = " << x << endl;
    x += b;  cout << "x += b -> " << x << endl;
    x -= b;  cout << "x -= b -> " << x << endl;
    x *= b;  cout << "x *= b -> " << x << endl;
    x /= b;  cout << "x /= b -> " << x << endl;
    x %= b;  cout << "x %= b -> " << x << endl;

    // Increment / Decrement
    cout << "\nIncrement/Decrement:\n";
    int y = 5;
    cout << "y = " << y << endl;
    cout << "y++ = " << y++ << " (post-increment)" << endl;
    cout << "++y = " << ++y << " (pre-increment)" << endl;
    cout << "y-- = " << y-- << " (post-decrement)" << endl;
    cout << "--y = " << --y << " (pre-decrement)" << endl;

    // Bitwise Operators
    cout << "\nBitwise Operators:\n";
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    // Ternary Operator
    cout << "\nTernary Operator:\n";
    int max = (a > b) ? a : b;
    cout << "Max of a and b = " << max << endl;

    return 0;
}
