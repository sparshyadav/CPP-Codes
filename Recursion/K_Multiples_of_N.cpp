#include <iostream>
using namespace std;

void multiple(int n, int k)
{
    if (k == 0)
    {
        return;
    }
    multiple(n, k - 1);
    int ans = n * k;
    cout << n << " * " << k << " = " << ans << endl;
}

int main()
{

    int n;
    cout << "Enter the Main Number: " << endl;
    cin >> n;

    int k;
    cout << "Enter the Number of Multiples: " << endl;
    cin >> k;

    multiple(n, k);

    return 0;
}