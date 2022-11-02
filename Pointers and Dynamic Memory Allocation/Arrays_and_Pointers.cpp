#include <iostream>
using namespace std;

int main()
{

    int arr[10];
    cout << "Address of first element: " << arr << endl;
    cout << "Address of first element: " << &arr[0] << endl;

    arr[0] = 24;
    cout << "Value stored at the 0th index: " << *arr << endl;
    cout << "Adding 1 to the value stored at 0th index: " << *arr + 1 << endl;

    int a[5] = {1, 2, 3, 4, 5};
    cout << "Value stored in index 0: " << *(a + 0) << endl;
    cout << "Value stored in index 1: " << *(a + 1) << endl;
    cout << "Value stored in index 2: " << *(a + 2) << endl;
    cout << "Value stored in index 3: " << *(a + 3) << endl;
    cout << "Value stored in index 4: " << *(a + 4) << endl; 

    // size of array and pointer
    int *temp=&a[0];
    cout<<"Size of array is: "<<sizeof(a)<<endl;
    cout<<"Size of Pointer is: "<<sizeof(temp)<<endl;
    cout<<"Size of value present in the array: "<<sizeof(*temp)<<endl;

    return 0;
}