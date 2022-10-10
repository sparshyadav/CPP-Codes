#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Write your totalPrime function here
bool isprime(int n)
{
    int i = 2;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int totalPrime(int S, int E)
{
    int count = 0;

    for (int i = S; i <= E; i++)
    {
        if (isprime(i))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}