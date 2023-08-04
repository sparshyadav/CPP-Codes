// Write a program to display the largest number in an array.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Numbers: " << endl;
    cin >> n;
    int array[n];
    int i;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int lar = array[0];
    for (i = 1; i < n; i++)
    {
        if (lar < array[i])
        {
            lar = array[i];
        }
    }
    int sma = array[0];
    for (i = 1; i < n; i++)
    {
        if (sma > array[i])
        {
            sma = array[i];
        }
    }
    cout << "The largest number is: " << lar << endl;
    cout << "The smallest number is: " << sma << endl;
    return 0;
}
