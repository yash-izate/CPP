/* File Handling -
The useful classes for working with files in c++ -
1. fstreambase
2. ofstream --> derived from fstreambase
3. ifstream --> derived from fstreambase
*/

/*
In order to work with files in c++, you will have to open it.
Primarily, there are two ways to open a file:
1. using constructor
2. using member function open()  of the class
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string str1 = "Harry Bhai";
    string str2;

    // opening files using constructor
    // writing into it
    ofstream out("sample1.txt");
    out << str1 << " tutorial";
    out.close();

    // opening file using constructor
    //  reading the file
    ifstream in("sample1.txt");
    getline(in, str2);
    in.close();

    cout << str2;
    return 0;
}