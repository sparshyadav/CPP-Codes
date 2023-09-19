#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int elements[7] = {1, 1, 2, 1, 3, 3, 3};

    map<int, int> ele;
    for (int i = 0; i < 7; i++)
    {
        ele[elements[i]] ++;
    }

    int sum = 0;
    for (auto it : ele)
    {
        if (it.second > 1)
        {
            sum += it.first;
        }
    }

    cout << sum;

    return 0;
}