#include <iostream>
using namespace std;

int largestRow(int arr[][4])
{
    int max = INT16_MIN;
    int largestRow = -1;
    int i;
    for (i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max)
        {
            largestRow = i;
        }
    }
    return largestRow;
}

int main()
{

    int arr[3][4];
    cout << "Enter the 2D Array Values: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int row = largestRow(arr);
    cout << "The largest Row Sum is: " << row;

    return 0;
}