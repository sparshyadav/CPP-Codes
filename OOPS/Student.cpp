#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int rollNumber;
    string grade;
};

int main()
{

    Student s1;
    s1.name = "Sparsh";
    s1.age = 22;
    s1.rollNumber = 1383;
    s1.grade = "A+";

    cout << s1.name;

    return 0;
}