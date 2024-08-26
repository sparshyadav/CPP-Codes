#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "This is Base Display" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "This is Derived Display" << endl;
    }
};

int main()
{

    Base b;
    Derived d;

    b.display();
    d.display();

    return 0;
}