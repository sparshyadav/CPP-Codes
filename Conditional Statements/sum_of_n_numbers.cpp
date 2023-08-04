// Program that gives sum of numbers  in exceeding form till n.

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: \n";
    cin >> num;

    int sum;
    sum = 0;

    for (int counter = 1; counter <= num; counter++)
    {
        sum = sum + counter;
    }
    cout << "The sum is: " << sum;
    return 0;
}