// Write a program to find out whether the input taken from the user is uppercase, lowercase character, or a numeric value.
#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter the Character: " << endl;
    cin >> ch;

    if (ch >= 65 && ch <= 90)
    {
        cout << "It is an Uppercase Character." << endl;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "It is a Lowercase Character." << endl;
    }
    else
    {
        cout << "The number is Numeric.";
    }

    return 0;
}