// Write a program to find the Nth term of an AP using function, given by[(3*N)+7].
#include <iostream>
using namespace std;

int AP(int num)
{
    int ap = (3 * num) + 7;
    return ap;
}

int main()
{

    int num;
    cout << "Enter the Number: " << endl;
    cin >> num;

    int ans = AP(num);
    cout << "The Nth term of the AP is " << ans;

    return 0;
}