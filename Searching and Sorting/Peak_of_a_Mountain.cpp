// Write a program to find the peak of a mountain formed by array elements.
#include <iostream>
using namespace std;

int peakMountain(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
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

    int peak = peakMountain(arr, 10);
    cout << "The Peak of the Mountain is " << peak;
    return 0;
}