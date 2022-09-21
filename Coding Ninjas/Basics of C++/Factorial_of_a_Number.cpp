#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int j = 1;

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            j = j * i;
        }
        cout << j;
    }
    else if (n == 0)
    {
        cout << j;
    }
    else
    {
        cout << "Error";
    }

    return 0;
}