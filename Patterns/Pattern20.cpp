/* Write a program to draw the following pattern
 11111
  2222
   333
    44
     5
 */
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of rows you want in your pattern: " << endl;
    cin >> n;

    int i=1;
    while(i<=n){
        int j=n;
        int spaces=1;
        while(spaces<=i-1){
            cout<<" ";
            spaces++;
        }
        while(j>=i){
            cout<<i;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}