// Program to convert temperature from fahrenheit to celsius.

#include <iostream>
using namespace std;

int main()
{

    int temp;
    cout << "Enter Temperature in Fahrenheit: ";
    cin >> temp;

    int convert;
    convert = (temp - 32) * 5 / 9;

    cout << "The temp in celsius is: " << convert;
    return 0;
}