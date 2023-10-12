#include <bits/stdc++.h>
#include <vector>
using namespace std;

void subsets(vector<int> &arr, vector<vector<int>> &ans, int idx, vector<int> &output)
{
    if (idx == arr.size())
    {
        ans.push_back(output);
        return;
    }
    output.push_back(arr[idx]);
    subsets(arr, ans, idx + 1, output);
    output.pop_back();
    subsets(arr, ans, idx + 1, output);
}

int main()
{

    vector<int> arr = {1, 2, 3};
    vector<int> output;
    vector<vector<int>> ans;
    subsets(arr, ans, 0, output);

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