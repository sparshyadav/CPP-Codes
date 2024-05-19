#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void solve(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        swap(arr[min], arr[i]);
        print(arr, n);
        cout << endl;
    }
}

int main()
{

    int arr[5] = {12, 23, 54, 67, 17};

    solve(arr, 5);

    return 0;
}