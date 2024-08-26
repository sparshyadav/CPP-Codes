#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Default of Base" << endl;
    }

    Base(int x)
    {
        cout << "Params of Base" << x << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Default of Derived" << endl;
    }

    Derived(int x)
    {
        cout << "Params of Derived" << x << endl;
    }

    Derived(int x, int y) : Base(x)
    {
        cout << "Params of Derived" << y << endl;
    }
};

int main()
{
    Derived c;
    Derived d(5);
    Derived x(10, 20);

    return 0;
}