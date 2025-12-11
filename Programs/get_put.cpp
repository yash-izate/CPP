// get() and put() function to read characters and count and display


#include <iostream>
using namespace std;

int main()
{
    char ch;
    int count = 0;

    cout << "Enter a line of text: "; 
    cin.get(ch);

    while (ch != '\n')
    {
        cout.put(ch);
        count++;
        cin.get(ch);
    }

    cout << "\nNo. of characters = " << count << endl;
    return 0;
}