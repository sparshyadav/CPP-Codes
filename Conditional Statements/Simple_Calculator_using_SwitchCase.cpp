// Write a program that works as a simple calculator using switch case.
#include <iostream>
using namespace std;

int main()
{

    int num1;
    cout << "Enter the First Number: " << endl;
    cin >> num1;
    int num2;
    cout << "Enter the Second Number: " << endl;
    cin >> num2;
    char op;
    cout << "Enter the Operation that you want to perform: " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The sum of both the numbers is: " << num1 + num2;
        break;
    case '-':
        cout << "The difference of both the numbers is: " << num1 - num2;
        break;
    case '*':
        cout << "The multiplication of both the numbers is: " << num1 * num2;
        break;
    case '/':
        cout << "The division of both the numbers is: " << num1 / num2;
        break;
    case '%':
        cout << "The remainder of both the numbers is: " << num1 % num2;
        break;
    default:
        cout << "Invalid Operation";
        break;
    }

    return 0;
}