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
// #include <bits/stdc++.h>
// using namespace std;

// int solve(int idx, int last, vector<vector<int>> arr, vector<vector<int>> &dp)
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

//     if (dp[idx][last] != -1)
//     {
//         return dp[idx][last];
//     }

//     int maxi = 0;
//     int points;

//     for (int i = 0; i < 3; i++)
//     {
//         if (i != last)
//         {
//             points = arr[idx][i] + solve(idx - 1, i, arr, dp);
//             maxi = max(maxi, points);
//         }
//     }

//     return dp[idx][last] = maxi;
// }

// int main()
// {

//     vector<vector<int>> arr = {{1, 2, 5}, {3, 1, 1}, {3, 3, 3}};
//     vector<vector<int>> arr2 = {{10, 40, 70}, {20, 50, 80}, {30, 60, 90}};

//     vector<vector<int>> dp(3, vector<int>(4, -1));

//     int ans = solve(2, 3, arr2, dp);
//     cout << ans;

//     return 0;
// }

// Tabulation
#include <bits/stdc++.h>
using namespace std;

int solve(int idx, int last, vector<vector<int>> &arr, vector<vector<int>> &dp)
{
    dp[0][0] = max(arr[0][1], arr[0][2]);
    dp[0][1] = max(arr[0][0], arr[0][2]);
    dp[0][2] = max(arr[0][0], arr[0][1]);
    dp[0][3] = max(arr[0][0], max(arr[0][1], arr[0][2]));

    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for(int task=0; task<3; task++){
                if(task!=last){
                    int point=arr[i][task]+dp[i-1][task];
                    dp[i][last]=max(dp[i][last], point);
                }
            }
        }
    }

    return dp[idx - 1][3];
}

int main()
{

    vector<vector<int>> arr = {{1, 2, 5}, {3, 1, 1}, {3, 3, 3}};
    vector<vector<int>> arr2 = {{10, 40, 70}, {20, 50, 80}, {30, 60, 90}};

    vector<vector<int>> dp(3, vector<int>(4, -1));

    // for(int i=0; i<4; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<dp[i][j]<<" ";
    //     }

    //     cout<<endl;
    // }

    int ans = solve(2, 3, arr2, dp);
    cout << ans;

    return 0;
}