// Write a program to implement binary search on a sorted array.
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2; // mid should be initialized as mid=start+(end-start)/2 for a more optimized code
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int arr[10];
    cout << "Enter the numbers you want in your array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key you want to look in the array: " << endl;
    cin >> key;

    int index = binarySearch(arr, 10, key);
    cout << "The index of " << key << " is " << index;

    return 0;
}