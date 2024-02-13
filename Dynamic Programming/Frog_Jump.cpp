// Recursion
#include <bits/stdc++.h>
using namespace std;

int frogJump(int n, int heights[])
{
    if (n <= 1)
    {
        return 0;
    }

    int left = frogJump(n - 1, heights) + abs(heights[n] - heights[n - 1]);
    int right = frogJump(n - 2, heights) + abs(heights[n] - heights[n - 2]);

    return min(left, right);
}

int main()
{

    int n = 6;
    int heights[6] = {30, 10, 60, 10, 60, 50};

    int ans = frogJump(5, heights);
    cout << ans;

    return 0;
}
