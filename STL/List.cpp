// Lists in STL Library.
#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }

    cout << endl;

    // creating a list with 5 elements with 100 on every index
    list<int> li(5, 100);
    for (int i : li)
    {
        cout << i << " ";
    }
}