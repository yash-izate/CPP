#include <iostream>
#include <string>
using namespace std;

bool isAlphaNumeric(char c) {
    return (c >= 'A' && c <= 'Z') || 
           (c >= 'a' && c <= 'z') || 
           (c >= '0' && c <= '9');
}

char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // accepts full sentence

    string clean = "";

    // Remove spaces, punctuation, and convert to lowercase
    for (int i = 0; i < input.length(); i++) {
        if (isAlphaNumeric(input[i])) {
            clean += toLowerCase(input[i]);
        }
    }

    // Check for palindrome
    int start = 0;
    int end = clean.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (clean[start] != clean[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
