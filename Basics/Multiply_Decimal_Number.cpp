// Write a program to multiply of two decimal numbers entered by the user.
#include <iostream>
using namespace std;

int main()
{

    double num1, num2;
    cout << "Enter the numbers: \n";
    cin >> num1 >> num2;

    double pro;
    pro = num1 * num2;
    cout << "The product of the two numbers is " << pro;

    return 0;
}