#include <iostream>
using namespace std;

int bs(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int arro[6] = {1, 2, 3, 4, 5, 6};

    int result1 = bs(arr, 7, 2);
    int result2 = bs(arro, 6, 5);

    cout << result1;
    cout << result2;

    return 0;
}