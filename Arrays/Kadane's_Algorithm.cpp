#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxSum = max(sum, maxSum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxSum;
}

int main()
{

    int arr[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubarraySum(arr, 9);
    cout << "The Maximum Subarray Sum is: " << result;

    return 0;
}