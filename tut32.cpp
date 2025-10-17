// new and delete keywords in cpp

#include <iostream>
using namespace std;

int main()
{

    // basic example of pointer
    int a = 4;
    int *ptr = &a;

    cout << "The value of a is " << *(ptr) << endl;
    cout << "The address of a is " << ptr << endl;

    // new keyword
    int *p = new int(40);
    float *q = new float(3.14);

    cout << "The value at address p is " << *(p) << endl;
    cout << "The value at address q is " << *(q) << endl;

    // new in  array

    int *arr = new int[3];

    arr[0] = 10;
    arr[1] = 20;

    // new way to assign value because array is a default pointer
    *(arr + 2) = 30;
    *(arr + 3) = 40;

    // dynamically free the allocated memory of array by delete keyword
    delete[] arr;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;

    return 0;
}