#include <bits/stdc++.h>
using namespace std;

vector<int> maxSubarray(int arr[], int n)
{
    int sum = 0;
    int maxSum = INT_MIN;
    int sumStart = 0;
    int sumEnd = n - 1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > maxSum)
        {
            maxSum = sum;
            sumEnd = i;
        }
        if (sum < 0)
        {
            sum = 0;
            sumStart = i + 1;
        }
    }

    vector<int> ans;
    for (int i = sumStart; i <= sumEnd; i++)
    {
        ans.push_back(arr[i]);
    }

    return ans;
}

int main()
{

    int arr[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> result = maxSubarray(arr, 9);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}