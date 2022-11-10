// Write a program to find out whether a given array is sorted or not.
#include <iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}

int main()
{

    int arr[5];
    int size = 5;
    cout << "Enter the values: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    bool ans = isSorted(arr, size);
    cout << ans;

    return 0;
}