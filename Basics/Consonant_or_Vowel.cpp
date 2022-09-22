// Write a program to check whether the taken input from the user is a consonant or a variable.
#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter a Character: \n";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "The entered character is a vowel.";
    }
    else
    {
        cout << "The entered character is a consonant.";
    }
    return 0;
}