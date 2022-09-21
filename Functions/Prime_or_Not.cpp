// Write a program to check whether a number is prime or not, using functions.
#include <iostream>
using namespace std;

bool prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int num;
    cout << "Enter a Number: " << endl;
    cin >> num;

    int n = prime(num);
    cout << n;

    return 0;
}