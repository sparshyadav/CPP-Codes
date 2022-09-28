// Write a program to swap alternate elements in an array.
#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5];
    cout << "Enter the Elements of the array: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, 5);
    cout << endl;
    swapAlternate(arr, 5);
    printArray(arr, 5);

    return 0;
}