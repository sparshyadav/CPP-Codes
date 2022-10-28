// Write a progarm to sort an array using selection sort.
#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
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

    selectionSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }

    return 0;
}