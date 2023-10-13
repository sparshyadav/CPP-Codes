#include <bits/stdc++.h>
using namespace std;

void displayWays(int sr, int sc, int er, int ec, const string &s, vector<vector<bool>> &isVisited, vector<string> &ans)
{
    int rows = isVisited.size();
    int cols = isVisited[0].size();
    if (sr < 0 || sc < 0 || sr >= rows || sc >= cols || isVisited[sr][sc])
    {
        return;
    }

    if (sr == er && sc == ec)
    {
        // cout << s << endl;
        ans.push_back(s);
        return;
    }

    isVisited[sr][sc] = true;

    displayWays(sr + 1, sc, er, ec, s + "R", isVisited, ans);
    displayWays(sr, sc + 1, er, ec, s + "D", isVisited, ans);
    if (sr - 1 >= 0)
    {
        displayWays(sr - 1, sc, er, ec, s + "L", isVisited, ans);
    }
    if (sc - 1 >= 0)
    {
        displayWays(sr, sc - 1, er, ec, s + "U", isVisited, ans);
    }

    isVisited[sr][sc] = false;
}

int main()
{

    int rows = 2;
    int cols = 2;
    vector<vector<bool>> isVisited(rows, vector<bool>(cols, false));
    string s = "";
    vector<string> ans;

    displayWays(0, 0, rows, cols, s, isVisited, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}