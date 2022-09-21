#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Write your code here
    double total, basic;
    cin >> basic;
    char grade;
    cin >> grade;
    total = basic + ((basic / 100) * 20) + ((basic / 100) * 50);
    if (grade == 'A')
    {
        total = total + 1700;
    }
    else if (grade == 'B')
    {
        total = total + 1500;
    }
    else
    {
        total = total + 1300;
    }
    double gt = total - ((basic / 100) * 11);
    cout << llround(gt);

    return 0;
}