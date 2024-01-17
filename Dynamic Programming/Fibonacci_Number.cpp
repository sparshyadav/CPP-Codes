#include <bits/stdc++.h>
using namespace std;

int fibo(int n, vector<int> &dp)
{
    if (n <= 1) // Base Case
    {
        return n;
    }

    if (dp[n] != -1) // Checking if Previously Calculated Recursion Result
    {
        return dp[n];
    }

    return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp); // Returning and Storing the Result in dp Vector
}

int main()
{

    int n;
    cout << "Enter the Nth Term of Fibonacci Series:" << endl;
    cin >> n;

    vector<int> dp(n + 1, -1);

    // Memoisation
    cout << fibo(n, dp) << endl;

    // Tabulation
    int prev2 = 0;
    int prev1 = 1;

    for (int i = 2; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1;

    return 0;
}
