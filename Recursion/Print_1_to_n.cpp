#include <iostream>
using namespace std;

void print(int n){

    if(n==0){
        return;
    }

    return print(n-1);
    cout<<n <<" ";
}

int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    print(n);

    return 0;
}

