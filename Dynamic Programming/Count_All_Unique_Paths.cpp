// #include <bits/stdc++.h>
// using namespace std;

// int solve(int i, int j)
// {
//     if (i == 0 && j == 0)
//     {
//         return 1;
//     }

//     if (i < 0 || j < 0)
//     {
//         return 0;
//     }

//     int up = solve(i - 1, j);
//     int left = solve(i, j - 1);

//     return up + left;
// }

// int main()
// {

//     int ans = solve(2, 1);
//     cout << ans;

//     return 0;
// }

// Memoization
#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j, vector<vector<int>> &dp)
{
    if (i == 0 && j == 0)
    {
        return 1;
    }

    if (i < 0 || j < 0)
    {
        return 0;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int up = solve(i - 1, j, dp);
    int left = solve(i, j - 1, dp);

    return dp[i][j] = up + left;
}

int main()
{
    vector<vector<int>> dp(3, vector<int>(2, -1));

    int ans = solve(2, 1, dp);
    cout << ans;

    return 0;
}