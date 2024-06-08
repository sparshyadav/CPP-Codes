#include <bits/stdc++.h>
using namespace std;

class Human
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void fun()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};

int main()
{

    Human Sparsh;
    // Sparsh.a=19;
    // Sparsh.b=19;
    Sparsh.c = 19;
    Sparsh.fun();

    return 0;
}