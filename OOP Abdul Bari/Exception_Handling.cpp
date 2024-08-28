#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
        {
            throw 1;
        }

        c = a / b;
        cout << c;
    }
    catch (int e)
    {
        cout << "b is set to 0";
    }

    return 0;
}