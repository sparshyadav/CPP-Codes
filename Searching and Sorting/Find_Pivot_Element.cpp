// Write a progaram to find the pivot element in an rotated array.
// Pivot Element - {5,6,7,8,1,2,3}; 1 is the pivot element where the increasing series begins again.
#include <iostream>
using namespace std;

int findPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else if (arr[mid] <= arr[0])
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{

    int arr[10];

    cout << "Enter the numbers you want in your array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int pivot = findPivot(arr, 10);
    cout << "The Pivot Element in the array is: " << pivot;

    return 0;
}