// Write a program to check whether a program is even or odd.
#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a Number: " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd.";
    }

    return 0;
}