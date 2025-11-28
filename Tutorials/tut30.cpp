// Practice Problem

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    float a;
    float b;

public:
    void setData()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        cout << "Enter the value of b: " << endl;
        cin >> b;
    }

    int get_a()
    {
        return a;
    }

    int get_b()
    {
        return b;
    }

    void simple_operators()
    {
        cout << "------------- Simple Calculator ------------" << endl;
        cout << "A + B = " << a + b << endl;
        cout << "A - B = " << a - b << endl;
        cout << "A * B = " << a * b << endl;
        cout << "A / B = " << a / b << endl;
    }
};

class ScientificCalculator : public SimpleCalculator
{
    float x;
    float y;

public:
    void setData2()
    {
        x = get_a();
        y = get_b();
    }

    void scientific_operators()
    {
        cout << "------------ Scientific Calculator ----------------" << endl;
        cout << "cos(A) = " << cos(x) << " & cos(B) = " << cos(y) << endl;
        cout << "sin(A) = " << sin(x) << " & sin(B) = " << sin(y) << endl;
        cout << "tan(A) = " << tan(x) << " & tan(B) = " << tan(y) << endl;
        cout << "exp(A) = " << exp(x) << " & exp(B) = " << exp(y) << endl;
    }
};

class HybridCalculator : public ScientificCalculator
{
};

int main()
{
    HybridCalculator cal;
    cal.setData();
    cal.setData2();

    cal.simple_operators();
    cal.scientific_operators();

    return 0;
}