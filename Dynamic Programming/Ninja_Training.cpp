// #include <bits/stdc++.h>
// using namespace std;

// int solve(int idx, int last, vector<vector<int>> arr)
// {
//     if (idx == 0)
//     {
//         int maxi = INT_MIN;
//         for (int i = 0; i < 3; i++)
//         {
//             if (i != last)
//             {
//                 maxi = max(arr[idx][i], maxi);
//             }
//         }

//         return maxi;
//     }

//     int maxi = 0;
//     int points;

//     for (int i = 0; i < 3; i++)
//     {
//         if (i != last)
//         {
//             points = arr[idx][i] + solve(idx - 1, i, arr);
//             maxi = max(maxi, points);
//         }
//     }

//     return maxi;
// }

// int main()
// {

//     vector<vector<int>> arr = {{1, 2, 5}, {3, 1, 1}, {3, 3, 3}};
//     vector<vector<int>> arr2 = {{10, 40, 70}, {20, 50, 80}, {30, 60, 90}};

//     int ans = solve(2, 3, arr2);
//     cout << ans;

//     return 0;
// }

// Memoization
#include <bits/stdc++.h>
using namespace std;

int solve(int idx, int last, vector<vector<int>> arr, vector<vector<int>> &dp)
{
    if (idx == 0)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            if (i != last)
            {
                maxi = max(arr[idx][i], maxi);
            }
        }

        return maxi;
    }

    if (dp[idx][last] != -1)
    {
        return dp[idx][last];
    }

    int maxi = 0;
    int points;

    for (int i = 0; i < 3; i++)
    {
        if (i != last)
        {
            points = arr[idx][i] + solve(idx - 1, i, arr, dp);
            maxi = max(maxi, points);
        }
    }

    return dp[idx][last] = maxi;
}

int main()
{

    vector<vector<int>> arr = {{1, 2, 5}, {3, 1, 1}, {3, 3, 3}};
    vector<vector<int>> arr2 = {{10, 40, 70}, {20, 50, 80}, {30, 60, 90}};

    vector<vector<int>> dp(3, vector<int>(4, -1));

    int ans = solve(2, 3, arr2, dp);
    cout << ans;

    return 0;
}