/*
File handling - <fstream>
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting our file with output stream
    ofstream outf("sample41.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    // writing the string to the file
    outf << "My name is " + name;

    // disconnecting the code from the file
    outf.close();

    // connecting our file with input stream
    ifstream inf("sample41.txt");
    string content;
    getline(inf, content);
    cout << content << endl;
    inf.close();

    return 0;
}