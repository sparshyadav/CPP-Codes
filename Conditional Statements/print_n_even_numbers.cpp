// Program to print even numbers till n.

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: \n";
    cin >> num;

    for (int counter = 1; counter <= num; counter++)
    {
        if (counter % 2 == 0)
        {
            cout << counter << " ";
        }
    }
    return 0;
}