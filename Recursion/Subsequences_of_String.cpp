#include <bits/stdc++.h>
#include <vector>
using namespace std;

void allSubsequences(string str, vector<string> &ans, int idx, string output)
{
    if (idx == str.length())
    {
        ans.push_back(output);
        return;
    }

    allSubsequences(str, ans, idx + 1, output + str[idx]);
    allSubsequences(str, ans, idx + 1, output);
}

int main()
{

    string str = "abcd";
    string output = "";
    vector<string> ans;
    allSubsequences(str, ans, 0, output);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}