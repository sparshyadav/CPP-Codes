#include <iostream>
using namespace std;

class Hero
{
private:
    int health;
    char level;

public:
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    Hero Sparsh;
    Sparsh.setHealth(75);
    Sparsh.setLevel('A');
    // cout<<"Size: "<<sizeof(Sparsh)<<endl;
    cout << "Health: " << Sparsh.getHealth() << endl;
    cout << "Level: " << Sparsh.getLevel() << endl;
    cout<<"Size: "<<sizeof(Sparsh);

    return 0;
}