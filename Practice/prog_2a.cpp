// program to check whether a character is alphabet, digit or special character

#include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        cout << ch << " - It is an alphabet." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " - It is a digit." << endl;
    }
    else
    {
        cout << ch << " - It is a special character." << endl;
    }
 
    return 0;
} 