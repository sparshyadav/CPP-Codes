#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<int, string> record;

    record.insert(make_pair(2, "Sweta"));
    record.insert(make_pair(1, "Sparsh"));

    for (auto element : record)
    {
        cout << "Roll Number - " << element.first << " Name - " << element.second << endl;
    }

    return 0;
}