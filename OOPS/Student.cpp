#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int rollNumber;
    string grade;

public:
    void setStudent(string n, int a, int r, string g)
    {
        name = n;
        age = a;
        rollNumber = r;
        grade = g;
    }

    void getStudent()
    {
        cout << "Name - " << name << endl;
        cout << "Age - " << age << endl;
        cout << "RollNumber - " << rollNumber << endl;
        cout << "Grade - " << grade << endl;
    }
};

int main()
{

    Student s1;
    s1.setStudent("Sparsh", 22, 1383, "A+");
    s1.getStudent();

    return 0;
}