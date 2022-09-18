/* Write a program to draw the following pattern
D
CD
BCD
ABCD
 */
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of rows you want in your pattern: " << endl;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}