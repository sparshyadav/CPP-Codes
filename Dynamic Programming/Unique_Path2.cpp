#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j, vector<vector<int>> arr)
{
    if (i == 0 && j == 0)
    {
        return 1;
    }

    if (i < 0 || j < 0)
    {
        return 0;
    }

    if (arr[i][j] == 1)
    {
        return 0;
    }

    int up = solve(i - 1, j, arr);
    int left = solve(i, j - 1, arr);

    return up + left;
}

int main()
{

    vector<vector<int>> arr = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    vector<vector<int>> arr2 = {{0, 1}, {0, 0}};

    int ans = solve(2, 2, arr);
    cout << ans << endl;

    int ans2 = solve(1, 1, arr2);
    cout << ans2;

    return 0;
}