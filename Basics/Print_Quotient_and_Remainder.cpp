// Write a program that prints the quotient and the remainder of the two numbers entered by the user.
#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    cout << "Enter the numbers: \n";
    cin >> num1 >> num2;

    int quo;
    quo = num1 / num2;
    cout << "The quotient is " << quo << endl;

    int rem;
    rem = num1 % num2;
    cout << "The remainder is " << rem;

    return 0;
}
