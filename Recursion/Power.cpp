#include<iostream>
using namespace std;

int pow(int base, int power){
    if(power==0){
        return 1;
    }
    if(power==1){
        return base;
    }
    int ans=pow(base, power/2);
    if(power%2==0){
        return ans*ans;
    }
    else{
        return base*ans*ans;
    }
}

int main(){

    int base;
    cout<<"Enter the Base Number: "<<endl;
    cin>>base;

    int power;
    cout<<"Enter the Power Number: "<<endl;
    cin>>power;

    cout<<"The Result is: "<<pow(base, power);

    return 0;
}