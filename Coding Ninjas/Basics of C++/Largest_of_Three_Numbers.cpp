#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a;
        }
        else
        {
            cout << c;
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }

    return 0;
}