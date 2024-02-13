// Recursion
// #include <bits/stdc++.h>
// using namespace std;

// int fibo(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }

//     return fibo(n - 1) + fibo(n - 2);
// }

// int main()
// {

//     int n;
//     cout << "Enter the Nth Term of Fibonacci Series:" << endl;
//     cin >> n;

//     int ans = fibo(n);
//     cout << ans;

//     return 0;
// }

// Memoization
#include <bits/stdc++.h>
using namespace std;

int memo(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
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
    cout << "Enter the Nth Term of Fibonacci Series:" << endl;
    cin >> n;

    vector<int> dp(n + 1, -1);
    int ans = memo(n, dp);
    cout << ans;

    return 0;
}
