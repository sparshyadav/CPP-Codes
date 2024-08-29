#include <bits/stdc++.h>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void displayInfo()
    {
        cout << "My Name is " << name << endl;
        cout << "My Age is " << age << endl;
    }
};

int main()
{

    Person s("Sparsh Yadav", 22);
    s.displayInfo();

    return 0;
}