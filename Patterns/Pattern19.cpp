/* Write a program to draw the following pattern
 *****
  ****
   ***
    **
     *
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
        int j = n;
        int space = 1;
        while (space <= i - 1)
        {
            cout << " ";
            space++;
        }
        while (j >= i)
        {
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}