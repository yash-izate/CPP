/* Define a class Sample in C++ with two integer data members. Provide appropriate constructors and
  implement functions mul() and div() to perform multiplication and division of the data members.
  Write a suitable main function to test these operations. */

#include <iostream>
using namespace std;

class Sample
{
private:
    int a, b;

public:
    Sample()
    {
        a = 0;
        b = 0;
    }
    Sample(int x, int y)
    {
        a = x;
        b = y;
    }

    int mul();
    int div();
};

int Sample ::mul()
{
    int res = a * b;
    return res;
}

int Sample ::div()
{
    if (b == 0)
    {
        cout << "Division by zero not possible." << endl;
        return 0;
    }

    int res = (float)a / b;
    return res;
}

int main()
{
    Sample obj(20, 5);

    cout << "Multiplication (a,b) = " << obj.mul() << endl;
    cout << "Division (a,b) = " << obj.div() << endl;

    return 0;
}