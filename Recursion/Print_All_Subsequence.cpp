#include <bits/stdc++.h>
using namespace std;

void printSubsequence(int idx, int arr[], vector<int> &ans, int n)
{
    if (idx == n)
    {
        for (auto el : ans)
        {
            cout << el << " ";
        }
        cout << endl;

        return;
    }

    ans.push_back(arr[idx]);
    printSubsequence(idx + 1, arr, ans, n);

    ans.pop_back();
    printSubsequence(idx + 1, arr, ans, n);
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

    vector<int> ans;

    printSubsequence(0, arr, ans, n);

    return 0;
}