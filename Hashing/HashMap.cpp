#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> directory; // By Default creating an ascending hashmap
    directory["Sparsh"] = 5328795;
    directory["Shreya"] = 5436334;

    map<string, int, greater<string>> directory2; // Creating an Descending hashmap
    directory2["Sparsh"] = 5328795;
    directory2["Shreya"] = 5436334;

    // for (auto element : directory)
    // { // Iterating through the hashmap
    //     cout << "Name - " << element.first << " Number - " << element.second << endl;
    // }

    // for (auto element : directory2)
    // {
    //     cout << "Name - " << element.first << " Number - " << element.second << endl;
    // }

    // map<string, int>::iterator itr;

    // for (itr = directory.begin(); itr != directory.end(); itr++)
    // {
    //     cout << "Name - " << itr->first << " Number - " << itr->second << endl;
    // }

    map<string, int>::reverse_iterator itr;

    for (itr = directory.rbegin(); itr != directory.rend(); itr++)
    {
        cout << "Name - " << itr->first << " Number - " << itr->second << endl;
    }

    return 0;
}