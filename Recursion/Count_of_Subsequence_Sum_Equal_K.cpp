#include <bits/stdc++.h>
using namespace std;

int subsequenceSumK(int idx, int arr[], vector<vector<int>> &ans, vector<int> &dummy, int sum, int k, int n)
{
    if (sum == k)
    {
        return 1;
    }

    if (idx == n)
    {
        return 0;
    }

    dummy.push_back(arr[idx]);
    int left = subsequenceSumK(idx + 1, arr, ans, dummy, sum + arr[idx], k, n);

    dummy.pop_back();
    int right = subsequenceSumK(idx + 1, arr, ans, dummy, sum, k, n);

    return left + right;
}

int main()
{

    int n;
    cout << "Enter the Length of Array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the Target Sum: " << endl;
    cin >> k;

    vector<vector<int>> ans;
    vector<int> dummy;

    int output = subsequenceSumK(0, arr, ans, dummy, 0, k, n);

    cout << output;

    return 0;
}