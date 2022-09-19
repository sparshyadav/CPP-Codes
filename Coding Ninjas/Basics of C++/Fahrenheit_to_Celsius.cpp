#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int s;
    int e;
    int w;
    cin >> s;
    cin >> e;
    cin >> w;
    int cel;
    for (int i = s; i <= e; i += w)
    {
        cel = (i - 32) * 5 / 9;
        cout << i << " " << cel << endl;
    }
    return 0;
}