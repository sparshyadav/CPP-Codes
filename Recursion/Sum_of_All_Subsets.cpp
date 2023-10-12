#include <bits/stdc++.h>
using namespace std;

void subsetsSum(vector<int> &arr, vector<int> &ans, int idx, int sum)
{
    if (idx == arr.size())
    {
        ans.push_back(sum);
        return;
    }

    sum += arr[idx];
    subsetsSum(arr, ans, idx + 1, sum);
    sum -= arr[idx];
    subsetsSum(arr, ans, idx + 1, sum);
}

int main()
{

    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    int sum = 0;
    subsetsSum(arr, ans, 0, sum);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}