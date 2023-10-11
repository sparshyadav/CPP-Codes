#include <iostream>
using namespace std;

string removeOccurences(string str, int n, int i, string s)
{
    string ans = "";
    if (i == n)
    {
        return ans;
    }
    if (str[i] != s[0])
    {
        ans += str[i];
    }
    ans += removeOccurences(str, n, i + 1, s);
    return ans;
}

int main()
{

    string str = "abcdax";
    string result = removeOccurences(str, 6, 0, "a");
    cout << result;

    return 0;
}