// manipulators cout.width(x)

#include <iostream>
using namespace std;

int main()
{
    // Predefined data for 3 items
    string item[3] = {"Pen", "Book", "Pencil"};
    float cost[3] = {10.5, 120, 5};
    int qty[3] = {3, 2, 10};

    cout << "Item Details:\n";

    // Headings using width()
    cout.width(15);
    cout << "Item";
    cout.width(10);
    cout << "Cost";
    cout.width(10);
    cout << "Qty";
    cout.width(10);
    cout << "Total" << endl;

    for (int i = 0; i < 3; i++)
    {
        float total = cost[i] * qty[i];

        cout.width(15);
        cout << item[i];
        cout.width(10);
        cout << cost[i];
        cout.width(10);
        cout << qty[i];
        cout.width(10);
        cout << total << endl;
    }

    return 0;
}
