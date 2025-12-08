/* Program for binary to decimal
*/ 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() 
{
    string binary;
    cout << "Enter binary number: ";
    cin >> binary;

    string str = binary;
    int start = 0;
    int end = str.length() - 1;
    int dec = 0;

    while (end >= 0)
    {
        if (str[end] != '0')
        {
            dec = dec + pow(2,start);
        }
        end--;
        start++;
        
    }
    
    cout << "Decimal = " << dec << endl; 

 
    return 0;
}