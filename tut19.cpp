// Constructor with default arguments

#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple()
    {
        data1 = 0;
        data2 = 0;
    }
    Simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }

    void printData();
};

void Simple ::printData()
{
    cout << "The value of data is " << data1 << " and " << data2 << endl;
}

int main()
{
    Simple s1, s2(8), s3(3, 5);

    s1.printData();
    s2.printData();
    s3.printData();

    return 0;
}