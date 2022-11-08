// write a program to find the fibonacci number asked by the user
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int ans = fibonacci(n - 1) + fibonacci(n - 2);

    return ans;
}

int main()
{

    int n;
    cout << "Enter the Value: " << endl;
    cin >> n;

    int ans = fibonacci(n);
    cout << "The Value is: " << ans << endl;

    return 0;
}