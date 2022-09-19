#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int sumEven = 0;
    int sumOdd = 0;
    while (n != 0)
    {
        int p = n % 10;
        if (p % 2 == 0)
        {
            sumEven += p;
            n = n / 10;
        }
        else
        {
            sumOdd += p;
            n = n / 10;
        }
    }
    cout << sumEven << " " << sumOdd;
    return 0;
}