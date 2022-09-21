#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int x, n;
    cin >> x >> n;
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = product * x;
    }
    cout << product;
    return 0;
}