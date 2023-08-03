#include<iostream>
using namespace std;

class Student{
    public:
    int roll;
    int group;
};

int main(){

    //Statically Allocating an Object
    Student Sparsh;
    Sparsh.roll=1383;
    Sparsh.group=4;
    cout<<Sparsh.roll<<endl;
    cout<<Sparsh.group<<endl;

    //Dynamically Allocating an Object
    Student *Shreya=new Student;
    Shreya->roll=1421;
    Shreya->group=5;
    cout<<Shreya->roll<<endl;
    cout<<Shreya->group<<endl;

    return 0;
}