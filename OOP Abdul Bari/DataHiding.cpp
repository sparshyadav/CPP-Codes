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

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
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
    cout<<r.getBreadth();
    cout<<r.getLength();
    r.area();
}