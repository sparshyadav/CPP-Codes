// Write a program to search for an element in a 2D array.\#include<iostream>
#include <iostream>
using namespace std;

int lineraSearch(int arr[][3], int m, int n, int key)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == key)
            {
                return 1;
            }
        }
    }
    return -1;
}

int main()
{

    int arr[3][3];

    cout << "Enter the Values of the Array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter the Key Value: " << endl;
    cin >> target;

    int present = lineraSearch(arr, 3, 3, target);
    cout << present;

    return 0;
}