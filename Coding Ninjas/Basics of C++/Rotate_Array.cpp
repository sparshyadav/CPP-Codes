#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void rotateArray(int arr[], int size, int k)
{

    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[(i + k) % size];
    }
    for (int j = 0; j < size; j++)
    {
        arr[j] = temp[j];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Write your code here
    int n;
    int k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;

    rotateArray(arr, n, k);
    printArray(arr, n);

    return 0;
    return 0;
}