#include <bits/stdc++.h>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    void work()
    {
        cout << "I am Working" << endl;
    }
};

class Student : public Human
{
    int rollNumber;
    int fees;

public:
    Student(string name, int age, int rollNumber, int fees)
    {
        this->name = name;
        this->age = age;
        this->rollNumber = rollNumber;
        this->fees = fees;
    }

    void display()
    {
        cout << name << " " << age << " " << rollNumber << " " << fees << endl;
    }
};

int main()
{

    Student S("Sparsh", 22, 1383, 82000);
    S.display();

    return 0;
}