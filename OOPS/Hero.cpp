#include<iostream>
using namespace std;

class Hero{
public:
    int health;
    char level;
};

int main(){

// Hero Sparsh;
// Sparsh.health=70;
// Sparsh.level='A';
// cout<<"Size: "<<sizeof(Sparsh)<<endl;
// cout<<"Health: "<<Sparsh.health<<endl;
// cout<<"Level: "<<Sparsh.level<<endl;

    Hero *Sparsh=new Hero;
    cout<<"Health: "<<(*Sparsh).health<<endl;
    cout<<"Level: "<<(*Sparsh).level<<endl;

    return 0;
}