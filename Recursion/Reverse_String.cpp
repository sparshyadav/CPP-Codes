#include <iostream>
using namespace std;

void reverseString(string &str, int start, int end)
{
    if (start > end)
    {
        return;
    }
    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
}

int main()
{

    string str = "Sparsh Shreya";
    reverseString(str, 0, str.length() - 1);
    cout << str;

    return 0;
}