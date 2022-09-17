/* Write a program to draw the following pattern
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
 */
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of sides you want in your pattern: " << endl;
    cin >> n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i-1;
            cout<<ch;
            
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}