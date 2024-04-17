// #include<bits/stdc++.h>
// using namespace std;

// int solve(int n, int arr[]){
//     if(n==0){
//         return arr[0];
//     }

//     if(n<0){
//         return 0;
//     }

//     int pick=arr[n]+solve(n-2, arr);
//     int notPick=solve(n, arr);

//     return max(pick, notPick);
// }

// int main(){
//     int arr[5]={2, 7, 9, 3, 1};

//     int ans=solve(4, arr);

//     cout<<ans;
// }

// // Memoization
// #include <bits/stdc++.h>
// using namespace std;

// int solve(int n, int arr[], vector<int> &dp)
// {
//     if (n == 0)
//     {
//         return arr[0];
//     }

//     if (n < 0)
//     {
//         return 0;
//     }

//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }

//     int pick = arr[n] + solve(n - 2, arr, dp);
//     int notPick = solve(n - 1, arr, dp);

//     return dp[n] = max(pick, notPick);
// }

// int main()
// {
//     int arr[5] = {2, 7, 9, 3, 1};
//     vector<int> dp(5, -1);

//     int ans = solve(4, arr, dp);

//     cout << ans;
// }

// Tabulation
#include <bits/stdc++.h>
using namespace std;

int solve(int n, int arr[], vector<int> &dp)
{
    dp[0] = arr[0];
    int neg = 0;

    for (int i = 1; i < n; i++)
    {
        int pick = arr[i];
        if (i > 1)
        {
            pick += dp[i - 2];
        }

        int notPick = arr[i - 1];

        dp[i] = max(pick, notPick);
    }

    return dp[n];
}

int main()
{
    int arr[5] = {2, 7, 9, 3, 1};
    vector<int> dp(5, -1);

    int ans = solve(5, arr, dp);

    cout << ans;
}