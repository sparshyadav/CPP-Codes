#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main()
{

    int arr[9] = {-2, 1, 3, -2, 1, 4, -5, 1};
    int result = maxSubarraySum(arr, 9);
    cout << "The Maximum Subarray Sum is: " << result;

    return 0;
}