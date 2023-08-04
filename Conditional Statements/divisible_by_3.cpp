// Program to print all the numbers till n, except the one's divisible by 3.

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: \n";
    cin >> num;

    for (int counter = 1; counter < +num; counter++)
    {
        if (counter % 3 == 0)
        {
            continue;
        }
        cout << counter << " ";
    }
    return 0;
}