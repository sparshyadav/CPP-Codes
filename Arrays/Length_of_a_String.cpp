// Write a program to find the length of a string.
#include <iostream>
using namespace std;

int stringLength(char ch[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (ch[i] == '\0')
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
}

int main()
{

    char ch[20];
    cout << "Enter the String: " << endl;
    cin >> ch;

    cout << "The Length of String is: " << stringLength(ch, 20);

    return 0;
}