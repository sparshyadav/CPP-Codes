// Write a program to find the row wise sum of a 2D array.
#include <iostream>
using namespace std;

void rowSum(int arr[][3], int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
}

void colSum(int arr[][3], int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }
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

    rowSum(arr, 3, 3);
    cout << endl;
    colSum(arr, 3, 3);

    return 0;
}