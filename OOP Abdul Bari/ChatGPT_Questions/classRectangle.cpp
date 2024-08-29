#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    void area()
    {
        cout << "The Area of Rectangle is: " << length * breadth << endl;
    }
};

int main()
{

    Rectangle r1(3, 7);
    r1.area();

    Rectangle r2(10, 6);
    r2.area();

    return 0;
}