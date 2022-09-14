// Write a program to take two numbers as input from the user and swap them and print the output.
#include <iostream>
using namespace std;

int main()
{

    int num1;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    int num2;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    int temp;
    // Swapping the numbers
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "The numbers after swapping are: " << num1 << " " << num2;
    return 0;
}