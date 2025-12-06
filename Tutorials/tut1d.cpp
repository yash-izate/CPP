#include <iostream>
#include <string>
#include <algorithm>   // reverse, sort
#include <vector>
using namespace std;

int main() {

    // ---------------- BASIC INPUT ----------------
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "\nOriginal String: " << s << endl;

    // ---------------- LENGTH ----------------
    cout << "Length: " << s.length() << endl;

    // ---------------- ACCESS CHARACTERS ----------------
    cout << "First char: " << s.front() << endl;
    cout << "Last char: " << s.back() << endl;

    // ---------------- SUBSTRING ----------------
    if (s.length() >= 3)
        cout << "Substring (0,3): " << s.substr(0,3) << endl;

    // ---------------- APPEND ----------------
    string s2 = s;
    s2.append("XYZ");
    cout << "After append: " << s2 << endl;

    // ---------------- INSERT ----------------
    s2 = s;
    s2.insert(1, "HELLO");
    cout << "After insert: " << s2 << endl;

    // ---------------- ERASE ----------------
    s2 = s;
    if (s.size() >= 3)
        s2.erase(1, 2);       // erase 2 characters from index 1
    cout << "After erase: " << s2 << endl;

    // ---------------- REPLACE ----------------
    s2 = s;
    if (s.size() >= 3)
        s2.replace(1, 2, "ABCD");  
    cout << "After replace: " << s2 << endl;

    // ---------------- FIND ----------------
    int pos = s.find("a");
    if (pos != string::npos)
        cout << "'a' found at: " << pos << endl;
    else
        cout << "'a' not found" << endl;

    // ---------------- COMPARE ----------------
    string a = "hello", b = "hello";
    if (a == b)
        cout << "Comparison: Strings are equal" << endl;

    // ---------------- REVERSE ----------------
    s2 = s;
    reverse(s2.begin(), s2.end());
    cout << "Reversed: " << s2 << endl;

    // ---------------- SORT CHARACTERS ----------------
    s2 = s;
    sort(s2.begin(), s2.end());
    cout << "Sorted characters: " << s2 << endl;

    // ---------------- REMOVE SPACES ----------------
    s2 = s;
    s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());
    cout << "After removing spaces: " << s2 << endl;

    // ---------------- STRING TO INTEGER ----------------
    string num = "12345";
    int x = stoi(num);
    cout << "stoi('12345'): " << x << endl;

    // ---------------- INTEGER TO STRING ----------------
    int y = 789;
    string strNum = to_string(y);
    cout << "to_string(789): " << strNum << endl;

    // ---------------- FREQUENCY OF CHARACTERS ----------------
    int freq[256] = {0};
    for (char c : s)
        freq[c]++;

    cout << "Character frequency:\n";
    for (int i = 0; i < 256; i++)
        if (freq[i] > 0)
            cout << char(i) << " -> " << freq[i] << endl;

    return 0;
}
