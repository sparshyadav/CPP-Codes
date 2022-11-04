#include <iostream>
using namespace std;

int main()
{

    int i = 3;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "Value Stored at i: " << i << endl;
    cout << "Value Stored at ptr: " << *ptr << endl;
    cout << "Value Stored at ptr2: " << **ptr2 << endl;

    cout << "Address of i: " << &i << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Address of ptr2: " << &ptr2 << endl;

    return 0;
}