// #include <bits/stdc++.h>
// using namespace std;

// int solve(int i, int j, int m, int n, vector<vector<int>> arr)
// {
//     if (i == m - 1)
//     {
//         return arr[i][j];
//     }

//     int down = solve(i + 1, j, m, n, arr);
//     int downRight = solve(i + 1, j + 1, m, n, arr);

//     return min(down, downRight) + arr[i][j];
// }

// int main()
// {

//     vector<vector<int>> arr = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}}; // ans - 11 -> 2, 3, 5, 1

//     int ans = solve(0, 0, 4, 4, arr);
//     cout << ans;

//     return 0;
// }

// Memoization
#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j, int m, int n, vector<vector<int>> arr, vector<vector<int>> &dp)
{
    if (i == m - 1)
    {
        return arr[i][j];
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int down = solve(i + 1, j, m, n, arr, dp);
    int downRight = solve(i + 1, j + 1, m, n, arr, dp);

    return dp[i][j] = min(down, downRight) + arr[i][j];
}

int main()
{
    vector<vector<int>> dp(4, vector<int>(4, -1));

    vector<vector<int>> arr = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}}; // ans - 11 -> 2, 3, 5, 1

    int ans = solve(0, 0, 4, 4, arr, dp);
    cout << ans;

    return 0;
}