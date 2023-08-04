#include <iostream>
using namespace std;

void wavePrint(int arr[][4])
{
    for (int col = 0; col < 4; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < 3; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = 2; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
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

    wavePrint(arr);

    return 0;
}