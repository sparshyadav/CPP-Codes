// Write a program to the sum of all even and odd numbers in an array.
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
    int sumeven = 0;
    int sumodd = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumeven = sumeven + arr[i];
        }
        if (arr[i] % 2 != 0)
        {
            sumodd = sumodd + arr[i];
        }
    }
    cout << "The sum of even numbers is: " << sumeven;
    cout << "The sum of odd numbers is: " << sumodd;
    return 0;
}