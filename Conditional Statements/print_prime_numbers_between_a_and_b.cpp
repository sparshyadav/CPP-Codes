// Program to print even numbers between two given numbers.

#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter the numbers: \n";
    cin >> a >> b;
    int i;
    for (int counter = a; counter <= b; counter++)
    {
        for (i = 2; i < counter; i++)
        {
            if (counter % i == 0)
            {
                
                break;
            }
        }
        if (counter == i)
        {
            cout << counter << endl;
        }
    }
    return 0;
}