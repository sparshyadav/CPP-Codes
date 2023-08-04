// Write a program to input numbers in an array and then print them.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Numbers: " << endl;
    cin >> n;
    
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}