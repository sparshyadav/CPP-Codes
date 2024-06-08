#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string name;

public:
    void introduce()
    {
        cout << "Hello, My Name is: " << name << endl;
    }
};

class Employee : public Person
{
protected:
    int salary;

public:
    void monthlySalary()
    {
        cout << "My Monthly Salary is: " << salary << endl;
    }
};

class Manager : public Employee
{
protected:
    string department;

public:
    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
        cout << endl;
    }
};

int main()
{

    Manager S1("Sparsh", 2500000, "IT");
    S1.introduce();
    S1.monthlySalary();
    S1.display();

    return 0;
}