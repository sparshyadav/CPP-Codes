// Write a program to print sum of all numbers in an array.
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "The sum of all numbers in the array is: " << sum;

    return 0;
}