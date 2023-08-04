#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the Number of Elements in the array: " << endl;
    cin >> n;

    int i;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the Number you want to search: " << endl;
    cin >> x;
    int flag = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = flag + 1;
            cout << i;
        }
        if (flag = 0)
        {
            cout << "number not found";
        }
    }

    return 0;
}