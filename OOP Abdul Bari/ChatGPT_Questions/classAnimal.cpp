#include<bits/stdc++.h>
using namespace std;

class Animal{
    public: 
    void makeSound(){
        cout<<"Animal Sound"<<endl;
    }
};

class Dog: public Animal{
    public:
    void makeSound(){
        cout<<"Woof"<<endl;
    }
};

int main(){

    Dog d;
    d.makeSound();

    return 0;
}