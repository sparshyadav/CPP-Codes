// #include <bits/stdc++.h>
// using namespace std;

// int solve(int i, int j, vector<vector<int>> &arr)
// {
//     if (i < 0 || j < 0 || j >= arr[0].size())
//     {
//         return INT_MAX;
//     }

//     if (i == 0)
//     {
//         return arr[0][j];
//     }

//     int up = solve(i - 1, j, arr);
//     int upLeft = solve(i - 1, j - 1, arr);
//     int upRight = solve(i - 1, j + 1, arr);

//     return min(up, min(upLeft, upRight)) + arr[i][j];
// }

// int main()
// {

//     vector<vector<int>> arr = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};

//     int ans = INT_MAX;
//     for (int i = 0; i < 3; i++)
//     {
//         int res = solve(2, i, arr);
//         ans = min(ans, res);
//     }

//     cout << ans;

//     return 0;
// }

// Memoization
// #include <bits/stdc++.h>
// using namespace std;

// int solve(int i, int j, vector<vector<int>> &arr, vector<vector<int>> &dp)
// {
//     if (i < 0 || j < 0 || j >= arr[0].size())
//     {
//         return INT_MAX;
//     }

//     if (i == 0)
//     {
//         return arr[0][j];
//     }

//     if (dp[i][j] != -1)
//     {
//         return dp[i][j];
//     }

//     int up = solve(i - 1, j, arr, dp);
//     int upLeft = solve(i - 1, j - 1, arr, dp);
//     int upRight = solve(i - 1, j + 1, arr, dp);

//     return dp[i][j] = min(up, min(upLeft, upRight)) + arr[i][j];
// }

// int main()
// {

//     vector<vector<int>> arr = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};

//     int ans = INT_MAX;
//     for (int i = 0; i < 3; i++)
//     {
//         vector<vector<int>> dp(3, vector<int>(3, -1));

//         int res = solve(2, i, arr, dp);
//         ans = min(ans, res);
//     }

//     cout << ans;

//     return 0;
// }

// Tabulation
#include <bits/stdc++.h>
using namespace std;

int solve(int m, int n, vector<vector<int>> arr)
{
    vector<vector<int>> dp(m, vector<int>(n));

    for (int j = 0; j < n; j++)
    {
        dp[m - 1][j] = arr[m - 1][j];
    }

    for (int i = m - 2; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            int downLeft = INT_MAX;
            if (j > 0 && i < m - 1)
            {
                downLeft = dp[i + 1][j - 1];
            }

            int downRight = INT_MAX;
            if (j < n - 1 && i < m - 1)
            {
                downRight = dp[i + 1][j + 1];
            }

            int down = dp[i + 1][j];

            int ans = min(down, min(downLeft, downRight)) + arr[i][j];
            dp[i][j] = ans;
        }
    }

    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(dp[0][i], mini);
    }

    return mini;
}

int main()
{
    vector<vector<int>> arr = {{5, 7, 12}, {6, 5, 4}, {7, 8, 9}};

    int ans = solve(3, 3, arr);
    cout << ans;

    return 0;
}