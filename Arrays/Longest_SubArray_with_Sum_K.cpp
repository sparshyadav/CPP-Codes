#include <bits/stdc++.h>
using namespace std;

int subArrayLength(int arr[], int n, int k)
{
    int left = 0;
    int right = 0;
    int sum = arr[0];
    int maxLen = 0;
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
        {
            sum += arr[right];
        }
    }
    return maxLen;
}

int main()
{

    int arr[7] = {1, 2, 3, 1, 1, 1, 1};
    int k = 3;

    int result = subArrayLength(arr, 7, 3);
    cout << "The Max SubArray Length is: " << result;

    return 0;
}