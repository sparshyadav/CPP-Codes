#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            l = 0;
        }
    }

    void setBreadth(int b)
    {
        if (b >= 0)
        {
            breadth = b;
        }
        else
        {
            breadth = 0;
        }
    }

    void getLengthBreadth()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
    }

    void area()
    {
        cout << length * breadth << endl;
    }
};

int main()
{
    Rectangle r;
    r.setLength(5);
    r.setBreadth(10);
    r.getLengthBreadth();
    r.area();
}