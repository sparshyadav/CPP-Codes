// Write a program that converts temperature from farhenheit to celcius from -99 to a temperature entered by the user.
#include <iostream>
using namespace std;

int main()
{

    int farTemp = -100;
    int temp;
    cout << "Enter the Farhenheit Temperature: " << endl;
    cin >> temp;
    while (farTemp <= temp)
    {
        temp = (farTemp - 32) * 5 / 9;
        farTemp++;
        cout << "Farhenheit Temperature:" << farTemp << "  "
             << "Celcius Temperature: " << temp << endl;
    }

    return 0;
}