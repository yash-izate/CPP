// Write C++ program to reverse a string enter by user. (using append)

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
        rev.append(1, s[i]); 
        // append(count, character)
    }

    cout << "Reversed String: " << rev;

    return 0;
}
