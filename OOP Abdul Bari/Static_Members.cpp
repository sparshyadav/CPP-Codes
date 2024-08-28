#include <bits/stdc++.h>
using namespace std;

class Test
{
    int a;
    int b;

public:
    static int count;

    Test()
    {
        a = 10;
        b = 20;

        count++;
    }

    static int getCount()
    {
        return count;
    }
};

int Test::count = 0;

int main()
{

    Test t1;
    Test t2;
    Test t3;
    cout << t1.count << endl;
    cout << t2.count << endl;
    cout << t3.count << endl;
    cout << Test::count << endl;
    cout << t1.getCount() << endl;
    cout << Test::getCount();

    return 0;
}