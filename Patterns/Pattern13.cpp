/* Write a program to draw the following pattern
A
BC
DEF
GHIJ
KLMNO
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
    while (i < +n)
    {
        int j = 1;
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