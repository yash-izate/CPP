// File handling

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int cost;

    cout << "Enter the name of item: ";
    cin >> name;

    cout << "Enter the cost of item: ";
    cin >> cost;

    // Write data to file
    ofstream outf("sample.txt");
    outf << name << endl;
    outf << cost << endl;
    outf.close();

    name = "";
    cost = 0;

    // Read data from file
    ifstream inf("sample.txt");
    inf >> name;
    inf >> cost;

    cout << "\nName of item: " << name << endl;
    cout << "\nCost of item:" << cost << endl;

    return 0;
}