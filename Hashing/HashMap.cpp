#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int, greater<string>> directory;

    directory["Sparsh"] = 54543;
    directory["Shreya"] = 86588;
    directory["Rakshit"] = 23453;
    directory.insert(make_pair("Vishal", 36734));
    directory.insert(make_pair("Naman", 21674));

    for (auto element : directory)
    {
        cout << element.first << "-" << element.second << endl;
    }

    return 0;
}