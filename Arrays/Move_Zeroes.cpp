// Write a program to move all the zero's to the right side of the array.
#include <iostream>
using namespace std;

void moveZeroes(int arr[], int size)
{
    int i = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
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

    moveZeroes(arr, 5);
    printArray(arr, 5);

    return 0;
}