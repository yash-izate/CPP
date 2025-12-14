/*
------------------------------------------------------------
What I have learned from this program:

1. How to create and use file objects in C++.
   - ofstream is used to write data into a file.
   - ifstream is used to read data from a file.

2. How to open and close a file using:
   - open() to open the file
   - close() to safely close the file after use

3. How to write data into a file using:
   - out << statement

4. How to read data from a file using:
   - getline(ifstream_object, string_variable)

5. Difference between cin and ifstream:
   - cin is used to take input from the keyboard
   - ifstream reads data from a file

6. Importance of closing files:
   - It saves data properly
   - Frees system resources

------------------------------------------------------------
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Writing to file
    ofstream out;
    out.open("sample42.txt");

    out << "Hello World" << endl;
    out << "What are you doing" << endl;
    out.close();

    // Reading from file
    ifstream in;
    string st1, st2;
    in.open("sample42.txt");

    getline(in, st1);
    getline(in, st2);

    cout << "Hi! " << st1 << endl;
    cout << st2 << endl;

    return 0;
}