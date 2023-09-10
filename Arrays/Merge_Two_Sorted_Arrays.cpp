// Write a program to merge two sorted arrays into a third array.
#include <iostream>
using namespace std;

void mergeArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++]; 
    }
    while (j < m)
    {
        arr3[k++] = arr1[i++];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 8};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};

    mergeArray(arr1, 5, arr2, 3, arr3);
    printArray(arr3, 8);

    return 0;
}