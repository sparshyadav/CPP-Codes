// Recursion
#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n < 0)
    {
        return 0;
    }

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{

    int n;
    cout << "Enter the Number of Stairs you have to Climb: " << endl;
    cin >> n;

    int ans = climbStairs(n);
    cout << ans;

    return 0;
}
