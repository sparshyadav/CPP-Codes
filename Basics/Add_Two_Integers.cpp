// Write a program to add two integer numbers entered by the user.

#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    cout << "Enter the numbers: \n";
    cin >> num1 >> num2;
    int sum;
    sum = num1 + num2;
    cout << "The sum of the numbers is " << sum;
    return 0;
}