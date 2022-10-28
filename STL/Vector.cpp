// Vectors using STL Library.
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // declaration of a vector
    vector<int> v;

    // checking size of the vector using capacity
    cout << "Capacity -> " << v.capacity() << endl;

    // entering elements in the vector using pushback
    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;
    // here the capacity of the vector doubles when the 3rd element is entered in the array.
    // Thus, a vector doubles its size at every alteration i.e. 0, 1, 2, 4, 8, 16 and so onn.
    // Capacity tells you the size taken by the vector or the elements that can be entered in the vector.

    cout << "Size -> " << v.size() << endl;
    // size tells about the elements present in the vector.

    // printing an individual element using at
    cout << "Element at 2nd Index -> " << v.at(2) << endl;
    cout << "Element at 1st Index -> " << v.at(1) << endl;

    // removing elements from the back of vector using popback
    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // removing every element from the vector using clear; when using clear, only the size of the vector becomes 0, not the capacity, it will remain the same.
    cout << "Before Clear Size -> " << v.size() << endl;
    v.clear();
    cout << "After Clear Size -> " << v.size() << endl;

    // We can also use front and back operation just like array on vectors.
    // We can get the starting iterator of the vector using begin.

    // Initializing the entire vector with 1.
    vector<int> a(5, 1);
    cout << "Printing an entire vector with 1" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    // Copying an entire vector in another vector
    vector<int> b(a);
    cout << "Printing b" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }

    return 0;
}