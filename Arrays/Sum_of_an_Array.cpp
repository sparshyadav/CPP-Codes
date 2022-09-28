// Write a program to find the sum of all the elements in an array.
#include <iostream>
using namespace std;

int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int arr[5];
    cout << "Enter the Numbers you want in the array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int sum = arraySum(arr, 5);
    cout << "The sum of all the elements in the array is: " << sum;

    return 0;
}