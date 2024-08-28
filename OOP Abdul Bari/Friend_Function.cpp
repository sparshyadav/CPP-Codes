#include<bits/stdc++.h>
using namespace std;

class Test{
    int a;

    protected:
    int b;

    public:
    int c;

    friend void fun();
};

void fun(){
    Test t;
    t.a=10;
    t.b=20;
    t.c=30;
}

int main(){



    return 0;
}