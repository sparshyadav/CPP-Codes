/* Write a program to draw the following pattern
ABC
BCD
CDE
 */
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of sides you want in your pattern: " << endl;
    cin >> n;

    int i = 0;
    while (i < n)
    {
        int j = 1;
        char ch = 'A' + i + j - 1;
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