#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string arr[3] = {"collegeeee", "colle", "colleegge"};

    map<char, int> equal;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < arr[i].length(); j++)
        {
            equal[arr[i][j]]++;
        }
    }

    int flag = 0;
    for (auto it : equal)
    {
        if (it.second % 3 != 0)
        {
            cout << "False";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "True";
    }

    return 0;
}