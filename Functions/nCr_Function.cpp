// Write a program to calculate nCr of a number using functions, where nCr=n!/(r!*(n-r!)).
#include <iostream>
using namespace std;

int factorial(int x)
{
    int product = 1;
    for (int i = 1; i <= x; i++)
    {
        product *= i;
    }
    return product;
}

int nCr(int n, int r)
{
    int ans = factorial(n) / (factorial(r) * (factorial(n - r)));
    return ans;
}

int main()
{

    int num1, num2;
    cout << "Enter the Numbers for nCr: " << endl;
    cin >> num1 >> num2;

    int finalAns = nCr(num1, num2);
    cout << "nCr of " << num1 << "and " << num2 << " "
         << "is " << finalAns;

    return 0;
}