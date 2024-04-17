// // Recursion
// #include <bits/stdc++.h>
// using namespace std;

// int frogJump(int n, int heights[])
// {
//     if (n <= 1)
//     {
//         return 0;
//     }

//     int left = frogJump(n - 1, heights) + abs(heights[n] - heights[n - 1]);
//     int right = frogJump(n - 2, heights) + abs(heights[n] - heights[n - 2]);

//     return min(left, right);
// }

// int main()
// {

//     int n = 6;
//     int heights[6] = {30, 10, 60, 10, 60, 50};

//     int ans = frogJump(5, heights);
//     cout << ans;

//     return 0;
// }

// // Memoization
// #include <bits/stdc++.h>
// using namespace std;

// int memo(int n, int heights[], vector<int> &dp)
// {
//     if (n <= 1)
//     {
//         return 0;
//     }

//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }

//     int left = memo(n - 1, heights, dp) + abs(heights[n] - heights[n - 1]);
//     int right = memo(n - 2, heights, dp) + abs(heights[n] - heights[n - 2]);

//     return dp[n] = min(left, right);
// }

// int main()
// {

//     int n = 6;
//     int heights[6] = {30, 10, 60, 10, 60, 50};

//     vector<int> dp(n + 1, -1);

//     int ans = memo(5, heights, dp);
//     cout << ans;

//     return 0;
// }

// Tabulation
#include <bits/stdc++.h>
using namespace std;

int memo(int n, int heights[], vector<int> &dp)
{
    if (n <= 1)
    {
        return 0;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    int left = memo(n - 1, heights, dp) + abs(heights[n] - heights[n - 1]);
    int right = memo(n - 2, heights, dp) + abs(heights[n] - heights[n - 2]);

    return dp[n] = min(left, right);
}

int main()
{

    int n = 6;
    int heights[6] = {30, 10, 60, 10, 60, 50};

    vector<int> dp(n + 1, -1);

    int ans = memo(5, heights, dp);
    cout << ans;

    return 0;
}
