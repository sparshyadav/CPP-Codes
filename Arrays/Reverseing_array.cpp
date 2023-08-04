// Write a program to reverse an array.
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a Number: " << endl;
    cin >> n;

    int i;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    int temp;
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}