// Write a program to find the total number of occurences of an element in an array.
#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int totalOccurences(int arr[], int size, int key)
{
    int first = firstOccurence(arr, size, key);
    int last = lastOccurence(arr, size, key);
    int total = (last - first) + 1;
    return total;
}

int main()
{

    int arr[10];
    cout << "Enter the numbers you want in your array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key you want to look in the array: " << endl;
    cin >> key;

    int occurences = totalOccurences(arr, 10, key);
    cout << "The Total Number of Occurences of " << key << " are " << occurences;

    return 0;
}