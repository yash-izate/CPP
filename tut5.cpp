// functions

#include <iostream>
using namespace std;

int sum(int a, int b) {
    
    int c = a + b;
    return c;
}

int main() {
    int x = 3;
    int y = 7;

    int result = sum(x,y);

    cout << result << endl;

 
    return 0;
}