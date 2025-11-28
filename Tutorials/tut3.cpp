// union - for better memory management than struct

#include <iostream>
using namespace std;

union money {   // only one biggest size of memory is allocated and then shared between all variables
 
    int rice;            // 4 bytes
    char car;            // 1 bytes
    float pounds;        // 4 bytes

};

int main() {

    union money m1;
    
    m1.rice = 34;
    cout << m1.rice << endl;

    m1.car = 'X';
    cout << m1.car << endl;

    cout << m1.rice << endl;         // it will give garbage value

    
 
    return 0;
}