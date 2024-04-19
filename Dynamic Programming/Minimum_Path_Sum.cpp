#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j, vector<vector<int>> arr)
{
    if (i == 0 && j == 0)
    {
        return arr[i][j];
    }

    if (i < 0 || j < 0)
    {
        return INT_MAX;
    }

    int up = solve(i - 1, j, arr);
    int left = solve(i, j - 1, arr);

    return min(up, left) + arr[i][j];
}

int main()
{

    vector<vector<int>> arr = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};

    int ans = solve(2, 2, arr);
    cout << ans;

    return 0;
}