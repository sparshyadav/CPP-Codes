#include <iostream>
using namespace std;

int pow(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    if (power == 1)
    {
        return base;
    }
    int ans = base * pow(base, power - 1);
    return ans;
}

int main()
{

    int base;
    cout << "Enter the Base Number: " << endl;
    cin >> base;

    int power;
    cout << "Enter the Power Number: " << endl;
    cin >> power;

    cout << "The Result is: " << pow(base, power);

    return 0;
}