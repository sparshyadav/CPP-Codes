#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j)
{
    if (i == 0 && j == 0)
    {
        return 1;
    }

    if (i < 0 || j < 0)
    {
        return 0;
    }

    int up = solve(i - 1, j);
    int left = solve(i, j - 1);

    return up + left;
}

int main()
{

    int ans = solve(2, 1);
    cout << ans;

    return 0;
}