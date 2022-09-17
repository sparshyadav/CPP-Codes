// Write a program to find out whether the input taken from the user is positive, negative, or 0.
#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Number: "<<endl;
    cin>>num;

    if(num>0){
        cout<<"The number is positive."<<endl;
    }
    else if(num<0){
        cout<<"The number is negative."<<endl;
    }
    else{
        cout<<"The number is zero."<<endl;
    }

    return 0;
}