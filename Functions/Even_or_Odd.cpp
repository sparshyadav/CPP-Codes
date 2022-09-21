// Write a program to find whether an integer is even or odd using functions.
#include<iostream>
using namespace std;

bool isEven(int num){
    if(num&1){
        return 0;
    }
    return 1;
}

int main(){

    int num;
    cout<<"Enter a Number: "<<endl;
    cin>>num;

    int x=isEven(num);
    cout<<x;

    return 0;
}