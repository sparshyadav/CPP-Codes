// Write a program to find the ASCII Value of a character entered by the user.
#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter the character: \n";
    cin >> ch;

    cout << "The ASCII Value of " << ch << " is " << int(ch);
    return 0;
}