#include <bits/stdc++.h>
using namespace std;

void findCombination(int idx, int target, vector<int> arr, vector<vector<int>> &ans, vector<int> &dummy)
{
    if (idx == arr.size())
    {
        if (target == 0)
        {
            ans.push_back(dummy);
        }

        return;
    }

    if (arr[idx] <= target)
    {
        dummy.push_back(arr[idx]);
        findCombination(idx, target - arr[idx], arr, ans, dummy);
        dummy.pop_back();
    }

    findCombination(idx + 1, target, arr, ans, dummy);
}

int main()
{

    vector<int> arr = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> ans;
    vector<int> dummy;

    findCombination(0, target, arr, ans, dummy);

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