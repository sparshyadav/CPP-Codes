// Write a program to find out 3 largest elements in an array.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[10];
    cout << "Enter the numbers you want in your array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int first, second, third;
    first = second = third = INT_MIN;
    for (int j = 0; j < 10; j++)
    {
        if (arr[j] > first)
        {
            third = second;
            second = first;
            first = arr[j];
        }
        else if (arr[j] > second)
        {
            third = second;
            second = arr[j];
        }
        else if (arr[j] > third)
        {
            third = arr[j];
        }
    }

    cout << "The largest is: " << first << endl;
    cout << "The second largest is: " << second << endl;
    cout << "The third largest is: " << third << endl;

    return 0;
}