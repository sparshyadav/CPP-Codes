#include <bits/stdc++.h>
using namespace std;

void subsequenceSumK(int idx, int arr[], vector<vector<int>> &ans, vector<int> &dummy, int sum, int k, int n)
{
    if (sum == k)
    {
        ans.push_back(dummy);
        return;
    }

    if (idx == n)
    {
        return;
    }

    dummy.push_back(arr[idx]);
    subsequenceSumK(idx + 1, arr, ans, dummy, sum + arr[idx], k, n);

    dummy.pop_back();
    subsequenceSumK(idx + 1, arr, ans, dummy, sum, k, n);
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

    subsequenceSumK(0, arr, ans, dummy, 0, k, n);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}