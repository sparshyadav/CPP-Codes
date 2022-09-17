// Write a program to print numbers from 1 to n; n is taken from the user.
#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a Number: " << endl;
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        cout << i << " ";
        i++;
    }

    return 0;
}