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

    Rectangle r1, r2;
    r1.length = 5;
    r1.breadth = 10;
    cout << "R1 Perimeter - ", r1.perimeter();
    cout << "R1 Area - ", r1.area();

    r1.length = 2;
    r1.breadth = 13;
    cout << "R2 Perimeter - ", r2.perimeter();
    cout << "R2 Area - ", r2.area();

    return 0;
}