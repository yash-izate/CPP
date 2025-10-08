// Structure is used to include different datatypes 

#include <iostream>
using namespace std;

struct employee {
    int eId;
    char favchar;
    float salary;
    
};

// using typedef to give nickname 

typedef struct student {
    string name;
    int rollNo;
    char section;
} stu;

int main() {
  
    struct employee yash;

    yash.eId = 1007;
    yash.favchar = 'A';
    yash.salary = 1200.579;

    cout << yash.eId << endl;
    cout << yash.favchar << endl;
    cout << yash.salary << endl;

    // wrting shorthands only
 
    stu ojas;

    ojas.name = "Ojas";
    ojas.rollNo = 41;
    ojas.section = 'C';

    cout << ojas.name << endl;
    cout << ojas.rollNo << endl;
    cout << ojas.section << endl;

 
    return 0;
}