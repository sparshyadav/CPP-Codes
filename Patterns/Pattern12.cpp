/* Write a program to draw the following pattern
A
BB
CCC
DDDD
EEEEE
 */
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of rows you want in your pattern: " << endl;
    cin >> n;

    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch;
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }

    return 0;
}