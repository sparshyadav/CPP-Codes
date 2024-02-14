// Recursion
// #include <bits/stdc++.h>
// using namespace std;

// int maxSum(int arr[], int index)
// {
//     if (index == 0)
//     {
//         return arr[0];
//     }

//     if (index < 0)
//     {
//         return 0;
//     }

//     int pick = arr[index] + maxSum(arr, index - 2);
//     int notPick = 0 + maxSum(arr, index - 1);

//     return max(pick, notPick);
// }

// int main()
// {

//     int n;
//     cout << "Enter the Number of Elements You Want in the Array" << endl;
//     cin >> n;

//     int arr[n];
//     cout << "Enter the Elements in Your Array" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int sum = maxSum(arr, n - 1);
//     cout << sum;

//     return 0;
// }

// Memoization
#include <bits/stdc++.h>
using namespace std;

int memo(int arr[], int index, vector<int> &dp)
{
    if (index == 0)
    {
        return arr[0];
    }

    if (index < 0)
    {
        return 0;
    }

    if (dp[index] != -1)
    {
        return dp[index];
    }

    int pick = arr[index] + memo(arr, index - 2, dp);
    int notPick = 0 + memo(arr, index - 1, dp);

    return dp[index] = max(pick, notPick);
}

int main()
{

    int n;
    cout << "Enter the Number of Elements You Want in the Array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the Elements in Your Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> dp(n + 1, -1);

    int sum = memo(arr, n - 1, dp);
    cout << sum;

    return 0;
}