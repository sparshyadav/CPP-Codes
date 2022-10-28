// Arrays using STL Library.
#include <iostream>
#include <array>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    // Array declaration using STL
    array<int, 5> a = {6, 7, 8, 9, 10};
    int size = a.size();

    // printing the entire array
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    // printing individual elements using at
    cout << "Element at 2nd index -> " << a.at(2) << endl;
    cout << "Element at 4th index -> " << a.at(4) << endl;

    // checking whether the array is empty or not using empty
    cout << "Empty or not -> " << a.empty() << endl;

    // printing first and last element of an array using front and last
    cout << "First element -> " << a.front() << endl;
    cout << "Last element -> " << a.back() << endl;

    return 0;
}