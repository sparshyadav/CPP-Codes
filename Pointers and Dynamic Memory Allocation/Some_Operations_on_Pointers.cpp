#include <iostream>
using namespace std;

int main()
{

    int i = 7;
    int *p = &i;
    cout << "Before Increment Value: " << i << endl;
    (*p)++;
    cout << "After Increment Value: " << i << endl;

    // copying a pointer
    int *q = p; 
    cout << "Value of p is " << p << " and value of q is " << q << endl;
    cout << "Value stored at the address of p is " << *p << " and value stored at the address of q is " << *q << endl;

    // adding to a pointer
    int x = 2;
    int *ptr = &x;
    cout << "Before Adding: " << ptr << endl;
    ptr = ptr + 1;
    cout << "After adding: " << ptr << endl;

    cout << "Before Adding: " << *ptr << endl;
    *ptr = *ptr + 1;
    cout << "After adding: " << *ptr << endl;

    return 0;
}