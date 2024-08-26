#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "This is Function 1" << endl;
    }

    void fun2()
    {
        cout << "This is Function 2" << endl;
    }

    void fun3()
    {
        cout << "This is Function 3" << endl;
    }
};

class Derived : public Base
{
public:
    void fun4()
    {
        cout << "This is Function 4" << endl;
    }

    void fun5()
    {
        cout << "This is Function 5" << endl;
    }
};

int main()
{

    Base *p;
    p = new Derived();

    p->fun1();
    p->fun2();
    p->fun3();
    // p->fun4(); Gives Error

    return 0;
}