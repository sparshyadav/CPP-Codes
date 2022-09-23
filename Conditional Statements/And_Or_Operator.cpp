// Write a program to check whether a number taken from the user is divisible by 2, 3, or both.
#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a Number: \n";
    cin >> num;

    if (num % 2 == 0 && num % 3 == 0)
    {
        cout << "Divisible by both the numbers.";
    }
    else if (num % 2 == 0)
    {
        cout << "Divisible by only 2.";
    }
    else if (num % 3 == 0)
    {
        cout << "Divisible by only 3.";
    }
    else
    {
        cout << "Divisible by none of the numbers.";
    }
    return 0;
}