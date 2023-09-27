#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    int start = 0;
    int mid = 0;
    int end = n - 1;
    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            int temp = arr[mid];
            arr[mid] = arr[start];
            arr[start] = temp;
            start++;
        }
        else if (arr[mid] == 2)
        {
            int temp = arr[mid];
            arr[mid] = arr[end];
            arr[end] = temp;
            end--;
        }
        mid++;
    }
}

int main()
{

    int arr[9] = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    sort(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}