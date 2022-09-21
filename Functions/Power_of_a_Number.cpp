// Write a program to find the power of a number using functions.
#include <iostream>
using namespace std;

int power(int x, int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * x;
    }
    return ans;
}

int main()
{

    int x;
    cout << "Enter the main Number: " << endl;
    cin >> x;
    int n;
    cout << "Enter the Power: " << endl;
    cin >> n;
    int ans = power(x, n);
    cout << x << "^" << n << " "
         << "="
         << " " << ans;

    return 0;
}