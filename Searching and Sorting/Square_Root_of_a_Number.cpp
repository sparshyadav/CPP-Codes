// Write a program to find the square root of a number given by the user using binary search.
#include <iostream>
using namespace std;

long long int squareRoot(int n)
{
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    long long int ans = -1;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < end)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}

int main()
{

    int num;
    cout << "Enter a Number:" << endl;
    cin >> num;

    int root = squareRoot(num);
    cout << "The Square Root of " << num << " is " << root;

    return 0;
}