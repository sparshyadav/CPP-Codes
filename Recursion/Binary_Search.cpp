// Write a program to search for an element in an array with binary search using recursion.
#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
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

    int key;
    cout << "Enter the Key Value: " << endl;
    cin >> key;

    cout << "Present or Not: " << binarySearch(arr, 0, 4, key);

    return 0;
}