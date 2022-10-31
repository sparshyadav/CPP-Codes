// Write a program to check if a string is palindrome or not.
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

int stringPalindrome(char ch[], int size)
{
    int start = 0;
    int end = size - 1;
    int pal;
    while (start <= end)
    {
        if (ch[start++] == ch[end--])
        {
            pal = 1;
        }
        else
        {
            pal = 0;
        }
    }
    return pal;
}

int main()
{

    char ch[20];
    cout << "Enter the String: " << endl;
    cin >> ch;

    int len = stringLength(ch, 20);
    cout << stringPalindrome(ch, len);

    return 0;
}