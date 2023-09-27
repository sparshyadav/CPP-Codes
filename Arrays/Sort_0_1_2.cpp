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
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else{
            int temp = arr[mid];
            arr[mid] = arr[end];
            arr[end] = temp;
            end--;
        }
    }
}

int main()
{

    int arr[9] = {2, 2, 2, 2, 0, 0, 1, 0};
    sort(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}