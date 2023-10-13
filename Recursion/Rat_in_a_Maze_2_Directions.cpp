#include <bits/stdc++.h>
using namespace std;

void displayWays(int sr, int sc, int er, int ec, const string &s)
{
    if (sr > er || sc > ec)
    {
        return;
    }

    if (sr == er && sc == ec)
    {
        cout << s << endl;
    }

    displayWays(sr + 1, sc, er, ec, s + "R");
    displayWays(sr, sc + 1, er, ec, s + "D");
}

int countWays(int sr, int sc, int er, int ec)
{
    int sum = 0;
    if (sr > er || sc > ec)
    {
        return 0;
    }

    if (sr == er && sc == ec)
    {
        return 1;
    }

    int right = countWays(sr + 1, sc, er, ec);
    int down = countWays(sr, sc + 1, er, ec);

    return down + right;
}

int main()
{

    int rows = 2;
    int cols = 2;
    string ans = "";
    displayWays(0, 0, rows, cols, ans);
    int sum = countWays(0, 0, rows, cols);
    cout << sum << endl;

    return 0;
}