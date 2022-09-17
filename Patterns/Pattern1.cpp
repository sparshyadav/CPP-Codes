/*Write a program to draw a square * pattern of n sides
*****
*****
*****
*****
*****
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
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}