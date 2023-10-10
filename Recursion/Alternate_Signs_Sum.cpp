#include<iostream>
using namespace std;

int alternateSum(int n){
    if(n==1){
        return 1;
    }
    int sum=sum+n;
    alternateSum(n-1);
}

int main(){

    int n;
    cout<<"Enter The Number: "<<endl;
    cin>>n;

    return 0;
}