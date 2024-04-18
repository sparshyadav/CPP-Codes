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
// #include <bits/stdc++.h>
// using namespace std;

// int solve(int i, int j, vector<vector<int>> &dp)
// {
//     if (i == 0 && j == 0)
//     {
//         return 1;
//     }

//     if (i < 0 || j < 0)
//     {
//         return 0;
//     }

//     if (dp[i][j] != -1)
//     {
//         return dp[i][j];
//     }

//     int up = solve(i - 1, j, dp);
//     int left = solve(i, j - 1, dp);

//     return dp[i][j] = up + left;
// }

// int main()
// {
//     vector<vector<int>> dp(3, vector<int>(2, -1));

//     int ans = solve(2, 1, dp);
//     cout << ans;

//     return 0;
// }

// Tabulation
// #include <bits/stdc++.h>
// using namespace std;

// int solve(int i, int j, vector<vector<int>> &dp)
// {
//     for (int row = 0; row < i; row++)
//     {
//         for (int col = 0; col < j; col++)
//         {
//             if (row == 0 && col == 0)
//             {
//                 dp[0][0] = 1;
//             }
//             else
//             {
//                 int up = 0;
//                 if (row > 0)
//                 {
//                     up = dp[row - 1][col];
//                 }

//                 int left = 0;
//                 if (col > 0)
//                 {
//                     left = dp[row][col - 1];
//                 }

//                 dp[row][col] = up + left;
//             }
//         }
//     }

//     return dp[i - 1][j - 1];
// }

// int main()
// {
//     vector<vector<int>> dp(3, vector<int>(7, -1));

//     int ans = solve(3, 7, dp);
//     cout << ans;

//     return 0;
// }

// Tabulation with Space Optimization
#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j)
{
    vector<int> prev(j, 0);

    for (int row = 0; row < i; row++)
    {
        vector<int> curr(j, 0);
        for (int col = 0; col < j; col++)
        {
            if (row == 0 && col == 0)
            {
                curr[0] = 1;
            }
            else
            {
                int up = 0;
                if (row > 0)
                {
                    up = prev[col];
                }

                int left = 0;
                if (col > 0)
                {
                    left = curr[col - 1];
                }

                curr[col] = up + left;
            }
        }

        prev = curr;
    }

    return prev[j - 1];
}

int main()
{
    int ans = solve(3, 2);
    cout << ans;

    return 0;
}