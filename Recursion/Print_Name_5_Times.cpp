#include<iostream>
using namespace std;

void printName(string name, int num){
    int count=0;
    if(count==num){
        return;
    }
    cout<<name<<" ";
    printName(name, num-1);
}

int main(){

    string name="Sparsh";
    printName(name, 5);

    return 0;
}