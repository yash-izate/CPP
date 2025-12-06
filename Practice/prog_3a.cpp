// Write C++ program to reverse a string enter by user

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, rev = "";

    cout << "Enter String: ";
    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev += s[i];
    }

    cout << "Reversed String: " << rev << endl;

    return 0;
}
