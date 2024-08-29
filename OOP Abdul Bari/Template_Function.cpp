#include <bits/stdc++.h>
using namespace std;

template <typename T>

T maxElement(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{

    cout << maxElement(3, 7) << endl;
    cout << maxElement(5.4, 8.7) << endl;

    return 0;
}