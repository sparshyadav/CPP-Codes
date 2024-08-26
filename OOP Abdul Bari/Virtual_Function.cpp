#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Base Class Display" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived Class Display" << endl;
    }
};

int main()
{

    Base b;
    Derived d;
    Base *p = &d;

    b.display();
    d.display();
    p->display();

    return 0;
}