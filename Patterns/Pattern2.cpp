/* Write a program to draw the following pattern taking n from the user
111
222
333
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
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}
