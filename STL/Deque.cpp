// Deque in STL Library.
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    // adding element from the front
    d.push_front(1);
    d.push_front(2);
    // first 1 will be added and then 2 will be added from the front.

    // adding elements from the back
    d.push_back(3);
    d.push_back(4);
    // first 3 will be added and then 4 will be added from the back.

    // printing the deque
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    // removing elements
    d.pop_front();
    d.pop_back();

    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    // We can also apply front, back, empty at operations on deque.

    // Erasing elements from the deque
    cout << "Before Erasing -> " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // it will remove the first element of the deque
    cout << "After Erasing -> " << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }
}