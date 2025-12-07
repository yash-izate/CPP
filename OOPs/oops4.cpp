#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    // Constructor
    Rectangle(float l = 0, float w = 0)
    {
        length = l;
        width = w;
    }

    // Friend function
    friend void displayArea(Rectangle r);
};

// Friend function definition
void displayArea(Rectangle r)
{
    cout << "Area of rectangle = " << r.length * r.width;
}

int main()
{
    Rectangle rect(25.75, 40.33);

    displayArea(rect); // Call friend function

    return 0;
}
