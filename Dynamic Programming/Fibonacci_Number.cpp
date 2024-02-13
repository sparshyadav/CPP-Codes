// Recursion
#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{

    int n;
    cout << "Enter the Nth Term of Fibonacci Series:" << endl;
    cin >> n;

    int ans = fibo(n);
    cout << ans;

    return 0;
}
