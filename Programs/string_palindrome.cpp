// string palindrome -  abcba

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    cout << "Enter string: ";
    cin >> s;

    string temp = s;
    bool isPalindrome = true;

    int start = 0;
    int end = s.length() - 1;

    while (end > start)
    {
        if (s[start] != s[end])
        {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    (isPalindrome) ? cout << "Palindrome" << endl : cout << "Not Palindrome" << endl;
    return 0;
}