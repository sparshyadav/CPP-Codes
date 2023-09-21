#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> &nums, int start, int end)
{
    while (start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
    return nums;
}

vector<int> leftRotate(vector<int> &arr, int n, int k)
{
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
    return arr;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};

    arr = leftRotate(arr, 6, 4);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}