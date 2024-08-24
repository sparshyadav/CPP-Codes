#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    void perimeter()
    {
        cout << 2 * (length + breadth) << endl;
    }

    void area()
    {
        cout << length * breadth << endl;
    }
};

int main()
{

    Rectangle r;
    Rectangle *p;
    p = &r;

    p->length = 10;
    p->breadth = 20;
    p->area();

    return 0;
}