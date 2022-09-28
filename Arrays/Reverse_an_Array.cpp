// Write a program to reverse an array.
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int first = 0;
    int last = size - 1;
    int temp;
    while (first <= last)
    {
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
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

    int arr[5];
    cout << "Enter the Numbers you want in the array: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, 5);
    printArray(arr, 5);

    return 0;
}