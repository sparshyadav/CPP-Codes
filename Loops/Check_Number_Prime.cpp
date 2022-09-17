// Write a program to check whether the number entered by the user is prime or not.
#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a Number: " << endl;
    cin >> num;
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            cout << "The Number is not Prime" << endl;
            break;
        }
        else
        {
            cout << "The Number is Prime";
            break;
        }
        i++;
    }

    return 0;
}