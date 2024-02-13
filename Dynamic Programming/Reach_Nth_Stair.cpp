// // Recursion
// #include <bits/stdc++.h>
// using namespace std;

// int climbStairs(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     if (n < 0)
//     {
//         return 0;
//     }

//     return climbStairs(n - 1) + climbStairs(n - 2);
// }

// int main()
// {

//     int n;
//     cout << "Enter the Number of Stairs you have to Climb: " << endl;
//     cin >> n;

//     int ans = climbStairs(n);
//     cout << ans;

//     return 0;
// }

// Memoization
#include <bits/stdc++.h>
using namespace std;

int memo(int n, vector<int> &dp)
{
    if (n == 0)
    {
        return 1;
    }

    if (n < 0)
    {
        return 0;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    return dp[n] = memo(n - 1, dp) + memo(n - 2, dp);
}

int main()
{

    int n;
    cout << "Enter the Number of Stairs you have to Climb: " << endl;
    cin >> n;

    vector<int> dp(n + 1, -1);

    int ans = memo(n, dp);
    cout << ans;

    return 0;
}
