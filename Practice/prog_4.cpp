// Program  to check leap year using conditional Operator

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter any year: ";
    cin >> year;

    (year % 4 == 0 && year % 100 != 0) ? cout << "Leap Year" : (year % 400 == 0) ? cout << "Leap year"
                                                                                 : cout << "Not a Leap Year";

    return 0;
}
