// Write a program to print numbers.
#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return; // base case
    }
    cout << n << endl; // processing
    print(n - 1);      // recursive relation
}

int main()
{

    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    print(n);

    return 0;
}