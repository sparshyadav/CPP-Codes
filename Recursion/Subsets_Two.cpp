#include <bits/stdc++.h>
using namespace std;

void allSubsets(int idx, vector<int> arr, vector<vector<int>> &ans, vector<int> dummy)
{
    ans.push_back(dummy);

    for (int i = idx; i < arr.size(); i++)
    {
        if (i == idx || arr[i] != arr[i - 1])
        {
            dummy.push_back(arr[i]);
            allSubsets(i + 1, arr, ans, dummy);
            dummy.pop_back();
        }
    }
}

int main()
{

    vector<int> arr = {1, 2, 2};

    vector<vector<int>> ans;
    vector<int> dummy;

    sort(arr.begin(), arr.end());
    allSubsets(0, arr, ans, dummy);

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