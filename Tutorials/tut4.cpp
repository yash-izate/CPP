// enum - improves code readilibity 

#include <iostream>
using namespace std;

int main() {
    
    enum hunger {breakfast, lunch, dinner};

    cout << dinner << endl;

    if (lunch == 1)
    {
        cout << "success";
    } else {
        cout << "failure";
    }
    
    return 0;
}