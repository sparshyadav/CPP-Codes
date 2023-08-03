// Write a program to find the sum of array using recursion.
#include <iostream>
using namespace std;

int arraySum(int arr[], int size)

    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int sum = arr[0] + arraySum(arr + 1, size - 1);
    return sum;


int main()
{

    int arr[5];
    int size = 5;
    cout << "Enter the values: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int ans = arraySum(arr, size);
    cout << "The sum of the array is: " << ans;

    return 0;
}