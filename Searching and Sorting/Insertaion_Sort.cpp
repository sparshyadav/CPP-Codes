// Write a progarm to sort an array using insertion sort.
#include <iostream>
using namespace std;

void insertaionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
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

    insertaionSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }

    return 0;
}