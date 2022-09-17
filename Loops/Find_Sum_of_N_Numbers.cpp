// Write a program to find the sum of first N numbers, N is taken from the user.
#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a Number: " << endl;
    cin >> num;
    int i = 1;
    int sum = 0;
    while (i <= num)
    {
        sum = sum + i;
        i++;
    }
    cout << "The Sum of N Numbers is: " << sum;

    return 0;
}