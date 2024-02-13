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
// #include <bits/stdc++.h>
// using namespace std;

// int memo(int n, vector<int> &dp)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     if (n < 0)
//     {
//         return 0;
//     }

//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }

//     return dp[n] = memo(n - 1, dp) + memo(n - 2, dp);
// }

// int main()
// {

//     int n;
//     cout << "Enter the Number of Stairs you have to Climb: " << endl;
//     cin >> n;

//     vector<int> dp(n + 1, -1);

//     int ans = memo(n, dp);
//     cout << ans;

//     return 0;
// }



// Tabulation
// #include <bits/stdc++.h>
// using namespace std;

// int tab(int n)
// {
//     vector<int> dp(n + 1);
//     dp[0] = 1;
//     dp[1] = 1;

//     for (int i = 2; i <= n; i++)
//     {
//         dp[i] = dp[i - 1] + dp[i - 2];
//     }

//     return dp[n];
// }

// int main()
// {

//     int n;
//     cout << "Enter the Number of Stairs you have to Climb: " << endl;
//     cin >> n;

//     int ans = tab(n);
//     cout << ans;

//     return 0;
// }



// Tabulation with Space Optimization -> O(1)
#include <bits/stdc++.h>
using namespace std;

int tab(int n)
{
    int curr;
    int prev = 1;
    int prev2 = 1;

    for (int i = 2; i <= n; i++)
    {
        curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }

    return prev;
}

int main()
{

    int n;
    cout << "Enter the Number of Stairs you have to Climb: " << endl;
    cin >> n;

    int ans = tab(n);
    cout << ans;

    return 0;
}
