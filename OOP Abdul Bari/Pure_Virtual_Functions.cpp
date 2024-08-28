#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void display() = 0;
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

    Derived d;
    Base *p = &d;

    d.display();
    p->display();

    return 0;
}