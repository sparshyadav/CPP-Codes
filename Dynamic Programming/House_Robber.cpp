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

// Memoization
#include <bits/stdc++.h>
using namespace std;

int solve(int n, int arr[], vector<int> &dp)
{
    if (n == 0)
    {
        return arr[0];
    }

    if (n < 0)
    {
        return 0;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    int pick = arr[n] + solve(n - 2, arr, dp);
    int notPick = solve(n - 1, arr, dp);

    return dp[n] = max(pick, notPick);
}

int main()
{
    int arr[5] = {2, 7, 9, 3, 1};
    vector<int> dp(5, -1);

    int ans = solve(4, arr, dp);

    cout << ans;
}