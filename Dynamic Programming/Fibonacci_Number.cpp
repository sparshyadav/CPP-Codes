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

    cout << fibo(n, dp);

    return 0;
}
