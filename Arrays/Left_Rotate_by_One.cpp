#include <iostream>
#include <vector>
using namespace std;

vector<int> leftRotate(vector<int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    return arr;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};

    arr = leftRotate(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}