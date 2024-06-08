#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    string name;
    int age;
    int weight;
};

class Student : protected Human
{
    int rollNumber;
    int fees;

public:
    Student(string name, int age, int weight)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }

    void display()
    {
        cout << "Name - " << name << endl;
        cout << "Age - " << age << endl;
        cout << "Weight - " << weight << endl;
    }
};

class Teacher : public Human
{
    int salary;
    int id;

public:
    Teacher(string name, int salary, int id)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }

    void display()
    {
        cout << "Name - " << name << endl;
        cout << "Age - " << age << endl;
        cout << "Weight - " << weight << endl;
    }
};

int main()
{
    Student S("Sparsh", 22, 82000);
    S.display();

    Teacher T("Sparsh", 222, 100000);
    T.display();
}