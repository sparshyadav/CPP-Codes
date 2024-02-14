// Recursion
#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int index)
{
    if (index == 0)
    {
        return arr[0];
    }

    if (index < 0)
    {
        return 0;
    }

    int pick = arr[index] + maxSum(arr, index - 2);
    int notPick = 0 + maxSum(arr, index - 1);

    return max(pick, notPick);
}

int main()
{

    int n;
    cout << "Enter the Number of Elements You Want in the Array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the Elements in Your Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = maxSum(arr, n - 1);
    cout << sum;

    return 0;
}