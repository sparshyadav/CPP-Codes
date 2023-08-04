// Write a program to find the pivot element in an array.
#include <iostream>
using namespace std;

int Pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = s + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{

    int arr[7] = {6, 7, 1, 2, 3, 4, 5};
    cout << "The Pivot element is: " << Pivot(arr, 7) << endl;
    return 0;
}