// Write a program to apply bitwise operator on integers.
#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 3;
    cout << "a&b is " << (a & b) << endl;
    cout << "a|b is " << (a | b) << endl;
    cout << "~a is " << (~a) << " ~b is " << (~b) << endl;
    cout << "a^b is " << (a ^ b) << endl;
    return 0;
}