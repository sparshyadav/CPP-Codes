#include <iostream>
using namespace std;

bool searching(int arr[][4], int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    int target = 4;

    if (searching(arr, target))
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Element is not present";
    }

    return 0;
}