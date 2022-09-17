// Write a program to find the sum of all even numbers and all odd numbers from 1 to N.
#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a Number: " << endl;
    cin >> num;
    int i = 1;
    int sumEven = 0;
    int sumOdd = 0;
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            sumEven = sumEven + i;
        }
        else
        {
            sumOdd = sumOdd + i;
        }
        i++;
    }

    cout << "The Sum of Even Numbers is: " << sumEven << endl;
    cout << "The Sum of Odd Numbers is: " << sumOdd;

    return 0;
}