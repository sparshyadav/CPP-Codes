// Write a program to sort an array using bubble sort.
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{

    int arr[10];

    cout << "Enter the numbers you want in your array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }

    return 0;
}