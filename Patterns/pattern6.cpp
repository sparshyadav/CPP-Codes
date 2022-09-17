/* Write a program to draw the following pattern
 1
 22
 333
 4444
 55555
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
        while (j <= i)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}