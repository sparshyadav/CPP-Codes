#include <bits/stdc++.h>
using namespace std;

class Engineer
{
public:
    string specialization;

    void work()
    {
        cout << "I have Specialized in: " << specialization << endl;
    }
};

class Youtuber
{
public:
    int subscribers;

    void contentCreator()
    {
        cout << "The Number of Subscribers that I have is: " << subscribers << endl;
    }
};

class codeTeacher : public Engineer, public Youtuber
{
public:
    string name;

    codeTeacher(string name, string specialization, int subscribers)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
    }

    void display()
    {
        cout << "Name - " << name << endl;
        cout << "Specialization - " << specialization << endl;
        cout << "Subscribers - " << subscribers << endl;
    }
};

int main()
{

    codeTeacher ct1("Sparsh", "Web Development", 50000);
    ct1.contentCreator();
    ct1.work();
    ct1.display();

    return 0;
}