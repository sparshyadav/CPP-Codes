// Write a program to take a name and age from user and print them in a suitable way.
#include <iostream>
using namespace std;

int main()
{

    string name;
    cout << "Enter your Name: " << endl;
    cin >> name;
    int age;
    cout << "Enter your Age: " << endl;
    cin >> age;
    cout << "The name of the person is " << name << " and age is " << age << endl;

    return 0;
}