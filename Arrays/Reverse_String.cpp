#include <iostream>
using namespace std;

int length(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

void reverse(char ch[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }

    cout << "The Reverse String is: " << ch << endl;
}

int main()
{

    char string[10];
    cout << "Enter the String: " << endl;
    cin >> string;
    cout << "The original string is: " << string<<endl;

    int len = length(string);

    reverse(string, len);

    return 0;
}