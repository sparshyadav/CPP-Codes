// Write a program to find an element in an array using linear Search.
#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size)
{
    int key;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[5];
    cout << "Enter the Numbers you want in the array: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the value of key: " << endl;
    cin >> key;

    int found = linearSearch(arr, 5);
    if (found)
    {
        cout << "The key is present";
    }
    else
    {
        cout << "The key is absent";
    }

    return 0;
}