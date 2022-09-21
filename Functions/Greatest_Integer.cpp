// Write a program to find the greatest of two inegers using functions.
#include <iostream>
using namespace std;

int greatest(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }

    return num2;
}

int main()
{

    int num1, num2;
    cout << "Enter the First Number: " << endl;
    cin >> num1;
    cout << "Enter the Second Number: " << endl;
    cin >> num2;

    int greater = greatest(num1, num2);
    cout << greater << " "
         << "is greater.";

    return 0;
}