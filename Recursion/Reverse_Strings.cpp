#include <iostream>
using namespace std;

void reverse(string &str, int start, int end)
{
    if (start > end)
    {
        return;
    }
    swap(str[start], str[end]);
    start++;
    end--;
    reverse(str, start, end);
}

int main()
{
    string name = "Sparsh";
    cout << name << endl;
    reverse(name, 0, name.length() - 1);
    cout << name;

    return 0;
}