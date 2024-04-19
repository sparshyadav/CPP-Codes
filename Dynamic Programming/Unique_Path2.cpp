// #include <bits/stdc++.h>
// using namespace std;

// int solve(int i, int j, vector<vector<int>> arr)
// {
//     if (i == 0 && j == 0)
//     {
//         return 1;
//     }

//     if (i < 0 || j < 0)
//     {
//         return 0;
//     }

//     if (arr[i][j] == 1)
//     {
//         return 0;
//     }

//     int up = solve(i - 1, j, arr);
//     int left = solve(i, j - 1, arr);

//     return up + left;
// }

// int main()
// {

//     vector<vector<int>> arr = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
//     vector<vector<int>> arr2 = {{0, 1}, {0, 0}};

//     int ans = solve(2, 2, arr);
//     cout << ans << endl;

//     int ans2 = solve(1, 1, arr2);
//     cout << ans2;

//     return 0;
// }

// Memoization
#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j, vector<vector<int>> arr, vector<vector<int>> &dp)
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

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int up = solve(i - 1, j, arr, dp);
    int left = solve(i, j - 1, arr, dp);

    return dp[i][j] = up + left;
}

int main()
{
    vector<vector<int>> dp(3, vector<int>(3, -1));

    vector<vector<int>> arr = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    vector<vector<int>> arr2 = {{0, 1}, {0, 0}};

    int ans = solve(2, 2, arr, dp);
    cout << ans << endl;

    return 0;
}