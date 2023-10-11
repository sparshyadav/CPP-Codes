#include <iostream>
using namespace std;

bool checkPalindrome(string s, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (s[start] != s[end])
    {
        return false;
    }
    checkPalindrome(s, start + 1, end - 1);
    return true;
}

int main()
{

    string str = "level";
    string str2 = "physics";
    cout << checkPalindrome(str, 0, 4);
    cout << checkPalindrome(str2, 0, 6);

    return 0;
}