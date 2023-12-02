#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int elements[7] = {1, 1, 2, 1, 3, 3, 3};

    map<int, int> mpp;

    for (int i = 0; i < 7; i++)
    {
        mpp[elements[i]]++;
    }

    int sum = 0;

    for (auto element : mpp)
    {
        if (element.second > 1)
        {
            sum += element.first;
        }
    }

    cout << sum;

    return 0;
}