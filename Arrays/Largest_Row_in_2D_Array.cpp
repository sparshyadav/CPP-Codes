// Write a program to find the row with the largest sum.
#include <iostream>
#include <climits>
using namespace std;

int largestRow(int arr[][3], int m, int n)
{
    int max = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
        }

        if (max < sum)
        {
            max = sum;
            rowIndex = m;
        }
    }
    cout << "The sum of row largest row is " << max;
    cout << endl;
    return rowIndex;
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

    int lar = largestRow(arr, 3, 3);
    cout << lar;

    return 0;
}