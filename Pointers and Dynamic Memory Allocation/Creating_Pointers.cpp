#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    cout << "Value Stored in num is: " << num << endl;
    cout << "Address of num is; " << &num << endl;
    cout << "Size of Pointer: " << sizeof(num);

    int *ptr = &num;
    cout << "Value Stored in the Address Stored in Pointer: " << *ptr << endl;
    cout << "Address of the pointer: " << ptr << endl;
    cout << "Size of Pointer: " << sizeof(ptr) << endl;

    double d = 9.8;
    double *ptr2 = &d;
    cout << "Value Stored in the Address Stored in Pointer: " << *ptr2 << endl;
    cout << "Address of the pointer: " << ptr2 << endl;
    cout << "Size of Pointer: " << sizeof(ptr2) << endl;

    char ch = 'c';
    char *ptr3 = &ch;
    cout << "Value Stored in the Address Stored in Pointer: " << *ptr3 << endl;
    cout << "Address of the pointer: " << ptr3 << endl;
    cout << "Size of Pointer: " << sizeof(ptr3) << endl;

    return 0;
}