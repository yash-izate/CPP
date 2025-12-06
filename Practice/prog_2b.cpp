// Program to check alphabets using conditional operator

#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    cout << "It is " << (((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) ? "an Alphabet" : "Not an Alphabet");

    return 0;
}