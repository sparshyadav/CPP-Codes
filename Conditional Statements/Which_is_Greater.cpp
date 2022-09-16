// Write a program to find the greater number out of two numbers.
#include <iostream>
using namespace std;

int main()
{

    int num1;
    cout << "Enter First Number: " << endl;
    cin >> num1;
    int num2;
    cout << "Enter Second Number: " << endl;
    cin >> num2;

    if (num1 > num2)
    {
        cout << "The first number is greater than the second number." << endl;
    }
    else
    {
        cout << "The second number is greater than the first number." << endl;
    }

    return 0;
}