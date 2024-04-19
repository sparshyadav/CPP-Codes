#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j, vector<vector<int>> &arr)
{
    if (i < 0 || j < 0 || j >= arr[0].size())
    {
        return INT_MAX;
    }

    if (i == 0)
    {
        return arr[0][j];
    }

    int up = solve(i - 1, j, arr);
    int upLeft = solve(i - 1, j - 1, arr);
    int upRight = solve(i - 1, j + 1, arr);

    return min(up, min(upLeft, upRight)) + arr[i][j];
}

int main()
{

    vector<vector<int>> arr = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};

    int ans = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        int res = solve(2, i, arr);
        ans = min(ans, res);
    }

    cout << ans;

    return 0;
}