/* Write a program to draw the following pattern
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
 */
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of sides you want in your pattern: " << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A';
        while (j <= n)
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