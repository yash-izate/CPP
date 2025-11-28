// Member Functions - check binary

#include <iostream>
#include <string>

using namespace std;

class Binary
{
private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void Binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format." << endl;
            exit(0);
        }
    }
    cout << "Correct Binary Format." << endl;
}

void Binary ::ones_compliment(void)
{
    // chk_bin();
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary ::display(void)
{
    cout << "Displaying One's Compliment of Binary Number: " << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    Binary b;

    b.read();
    b.chk_bin();
    b.ones_compliment();
    b.display();

    return 0;
}