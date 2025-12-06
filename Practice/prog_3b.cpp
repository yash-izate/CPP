// Write C++ program to reverse a string enter by user. ( in place reverse)

#include <iostream>

using namespace std;

int main()
{
    string s;

    cout << "Enter String: ";
    getline(cin, s);

    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        swap(s[start], s[end]);

        start++;
        end--;
    }

    cout << "Reversed String: " << s << endl;

    return 0;
}