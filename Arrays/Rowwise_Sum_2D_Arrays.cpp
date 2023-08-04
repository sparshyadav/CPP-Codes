#include <iostream>
using namespace std;

void sum(int arr[][4])
{
    int sum = 0;
    cout << "Printing Sum: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
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

    sum(arr);

    return 0;
}