// Write a program to print first N numbers of fibonacci series, N is taken from user.
#include <iostream>
using namespace std;

int main()
{

    int a = 0;
    int b = 1;
    int sum = 0;

    int n;
    cout << "Enter how many numbers of fibonacci series you want: " << endl;
    cin >> n;

    cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
    return 0;
}