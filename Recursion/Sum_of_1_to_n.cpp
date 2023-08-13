#include<iostream>
using namespace std;

int sum(int n){
    int add=0;
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

int mai(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    int ans=sum(n);
    cout<<"The Sum is: "<<ans;

    return 0;
}