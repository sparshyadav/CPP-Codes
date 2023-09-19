#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "triangle";
    string s = "integral";

    map<char, int> forStr;
    map<char, int> forS;

    for (int i = 0; i < str.length(); i++)
    {
        forStr[str[i]]++;
        forS[s[i]]++;
    }

    if (forStr == forS)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}