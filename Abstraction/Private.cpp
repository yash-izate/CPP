// Members declared as private are only accessible inside the class.
// You cannot access them directly from outside the class.

#include<iostream>
using namespace std;

class Secret {
private:
    int code = 1234;

public:
    void showCode() {
        cout << "Secret code is: " << code << endl;
    }
};

int main() {
    Secret s;
    // s.code = 5678;   // ❌ Not allowed
    s.showCode();       // ✅ Accessed through public function
    return 0;
}
