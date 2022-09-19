#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int j = 1;
    for (int i = 1; i <= n; i++)
    {
        j = j * i;
    }
    cout << j;
    return 0;
}