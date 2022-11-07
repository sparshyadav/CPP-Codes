// Write a program to find the factorial of a number using recursion.
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int smallerProblem = factorial(n - 1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main()
{

    int n;
    cout << "Enter the Number whose Factorial you want: " << endl;
    cin >> n;

    int ans = factorial(n);
    cout << "The Factorial of " << n << " is " << ans << endl;

    return 0;
}