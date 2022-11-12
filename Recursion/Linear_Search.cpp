// Write a program to find whether an element is present in an array or not.
#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1), size - 1, key;
        return remainingPart;
    }
}

int main()
{
    
    int arr[5];
    int size = 5;
    cout << "Enter the values: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the Key Value: " << endl;
    cin >> key;

    bool ans = linearSearch(arr, size, key);
    
    if (ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }

    return 0;
}